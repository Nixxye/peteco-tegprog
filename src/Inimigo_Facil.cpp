#include "../Entidades/Personagens/Inim_Facil.h"

namespace Entidades
{
    namespace Personagens
    {

        Inim_Facil::Inim_Facil(sf::Vector2f pos, sf::Vector2f vel):
        Inimigo(pos, vel),
        m(5)
        {

        }
        Inim_Facil::~Inim_Facil()
        {

        }
        void Inim_Facil::atualizar()
        {
            corpo.setPosition(corpo.getPosition() + velocidade);
        }
        void Inim_Facil::mover()
        {
            velocidade += sf::Vector2f(rand() % 10 - 5,(float) (nochao ? - (rand() % 5) : 0));
            if (!nochao)
                velocidade += sf::Vector2f(0, 0.1);  
            else
                velocidade = sf::Vector2f(velocidade.x, 0.f);
            nochao = false;
        }
        void Inim_Facil::salvar(std::ostringstream* entrada)
        {
            (*entrada) << "{ \"posicao\": [" << corpo.getPosition().x<<","<<corpo.getPosition().y<<"], \"velocidade\": ["<<velocidade.x<<","<<velocidade.y<<"] }" << std::endl;
        }
    }
}