#include "../Entidades/Entidade.h"

#include <iostream>

namespace Entidades
{
    Entidade::Entidade(sf::Vector2f pos):
    Ente(sf::Vector2f(TAM, TAM)),
    posicao(pos),
    nochao(false),
    velocidade(sf::Vector2f(0.f, 0.f))
    {
        corpo.setPosition(posicao);
    }
    Entidade::~Entidade()
    {
        
    }
    void Entidade::colidir()
    {
    }
    void Entidade::setPosicao(sf::Vector2f p)
    {
        corpo.setPosition(p);
    }
    void Entidade::setVelocidade(sf::Vector2f v)
    {
        velocidade = v;
    }
}