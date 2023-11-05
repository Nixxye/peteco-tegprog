#include "../Threads/Inim_Facil_Thread.h"

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