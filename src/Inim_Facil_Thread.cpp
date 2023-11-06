#include "../Threads/Inim_Facil_Thread.h"

#define ARQUIVO_THREAD "thread.json"

Inim_Facil_Thread::Inim_Facil_Thread(sf::Vector2f pos, sf::Vector2f vel):
    Inim_Facil(pos, vel),
    Thread(),
    novoFrame(false)
{

}

Inim_Facil_Thread::~Inim_Facil_Thread()
{

}

void Inim_Facil_Thread::NovoFrame()
{
    novoFrame = true;
}

void Inim_Facil_Thread::salvar()
{
    std::ofstream arquivo (ARQUIVO_THREAD,std::ofstream::binary);
    if (!arquivo)
    {
        std::cout << "Arquivo não existe" << std::endl;   
        exit(2);
    }
    arquivo << "[" << std::endl;
    arquivo << "    {" << std::endl << "        \"posicao\": [" << std::endl << "            " \
    << corpo.getPosition().x<<","<< std::endl << "            " <<corpo.getPosition().y<< std::endl << \
    "        ]," << std::endl << "        \"velocidade\": ["<< std::endl << "            " << velocidade.x<<"," << \
    std::endl << "            " <<velocidade.y<< std::endl <<"        ]" << std::endl << "    }" << std::endl;
    arquivo << "]";
    arquivo.close();
}


void Inim_Facil_Thread::run()
{
    this->corpo.setFillColor(sf::Color::Green);
    while(this->num_vidas > 0)
    {
        this->lock();
        if(!novoFrame)
        {
            this->unlock();
            continue;
        }
        novoFrame = false;
        this->executar();
        this->unlock();
    }
}