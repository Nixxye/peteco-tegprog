#include "../Entidades/Personagens/Jogador.h"

namespace Entidades
{
    namespace Personagens
    {
        Jogador::Jogador():
        Personagem(),
        pontos(0)
        {

        }
        Jogador::~Jogador()
        {

        }
        void Jogador::executar()
        {
            mover();
        }
        void Jogador::mover()
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                posicao += sf::Vector2f(1.f, 0);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                posicao += sf::Vector2f(-1.f, 0);   
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                posicao += sf::Vector2f(0, -1.f);    
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                posicao += sf::Vector2f(0, 1.f);       
            corpo.setPosition(posicao);
        }
    }
}
