#include "../Entidades/Entidade.h"

namespace Entidades
{
    Entidade::Entidade():
    Ente(),
    corpo(sf::Vector2f(50.f, 50.f)),
    posicao(sf::Vector2f(0.f, 0.f))
    {

    }
    Entidade::~Entidade()
    {
        
    }
    void Entidade::desenhar()
    {
        pGG->desenharEntidade(this);
    }
    const sf::RectangleShape* Entidade::get_corpo() const
    {
        return &corpo;
    }
}