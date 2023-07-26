#include "../Entidades/Entidade.h"

namespace Entidades
{
    Entidade::Entidade(sf::Vector2f pos):
    Ente(sf::Vector2f(TAM, TAM)),
    posicao(pos)
    {

    }
    Entidade::~Entidade()
    {
        
    }
}