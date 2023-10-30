#include "../Entidades/Personagens/Jogador.h"

namespace Entidades
{
    namespace Personagens
    {
        Jogador::Jogador(sf::Vector2f pos, sf::Vector2f vel):
        Personagem(pos, vel),
        pontos(0)
        {
            corpo.setFillColor(sf::Color::Red);
        }
        Jogador::~Jogador()
        {

        }

        void Jogador::atualizar()
        {
            corpo.setPosition(corpo.getPosition() + velocidade);
        }

        void Jogador::mover()
        {
            if (!nochao)
                velocidade += sf::Vector2f(0, 0.1);  
            else
                velocidade = sf::Vector2f(velocidade.x, 0.f);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                velocidade += sf::Vector2f(0.1, 0);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                velocidade += sf::Vector2f(-0.1, 0);   
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && nochao)
                velocidade += sf::Vector2f(0, -5.f);    
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                velocidade += sf::Vector2f(0, 0.1);  
            nochao = false;
        }
        void Jogador::salvar(std::ostringstream* entrada)
        {
            (*entrada) << "{ \"posicao\": [" << corpo.getPosition().x<<","<<corpo.getPosition().y<<"], \"velocidade\": ["<<velocidade.x<<","<<velocidade.y<<"] }" << std::endl;
        }
    }
}
