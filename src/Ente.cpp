#include "../Ente.h"

Ente::Ente():
corpo()
{

}

Ente::~Ente()
{

}
const sf::RectangleShape* Ente::get_corpo() const
{
    return &corpo;
}
