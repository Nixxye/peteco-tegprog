#include "../Entidades/Personagens/Jogador.h"

namespace Entidades
{
    namespace Personagens
    {
        Jogador::Jogador():
        Personagem(),
        pontos(0)
        {
            corpo.setFillColor(sf::Color::Red);
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
            if (!nochao)
                velocidade += sf::Vector2f(0, 1.f);  
            else
                velocidade = sf::Vector2f(velocidade.x, 0.f);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                velocidade += sf::Vector2f(1.f, 0);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                velocidade += sf::Vector2f(-1.f, 0);   
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                velocidade += sf::Vector2f(0, -1.f);    
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                velocidade += sf::Vector2f(0, 1.f);  
            corpo.setPosition(corpo.getPosition() + velocidade);
            nochao = false;
        }
    }
}
