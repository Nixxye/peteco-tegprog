#include "../Entidades/Entidade.h"

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

    void Entidade::executar()
    {
        this->mover();
        this->atualizar();
    }
}