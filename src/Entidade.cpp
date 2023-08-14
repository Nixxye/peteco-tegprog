#include "../Entidades/Entidade.h"

#include <iostream>

namespace Entidades
{
    Entidade::Entidade(sf::Vector2f pos):
    Ente(sf::Vector2f(TAM, TAM)),
    posicao(pos)
    {
        corpo.setPosition(posicao);
    }
    Entidade::~Entidade()
    {
        
    }
    void Entidade::colidir()
    {
        std::cout<<"Colidindo"<<std::endl;
    }
}