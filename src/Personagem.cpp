#include "../Entidades/Personagens/Personagem.h"

namespace Entidades
{
    namespace Personagens
    {
        Personagem::Personagem(sf::Vector2f pos, sf::Vector2f vel):
        Entidade(),
        num_vidas(1)
        {
            corpo.setPosition(pos);
            velocidade = vel;
        }
        Personagem::~Personagem()
        {
            num_vidas = 0;
        }
    }
}