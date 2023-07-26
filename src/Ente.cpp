#include "../Ente.h"

Gerenciadores::Gerenciador_Grafico* Ente::pGG(Gerenciadores::Gerenciador_Grafico::get_instancia());

Ente::Ente(sf::Vector2f tamanho):
id(0),
corpo(tamanho)
{

}

Ente::~Ente()
{

}  
const sf::RectangleShape* Ente::get_corpo() const
{
    return &corpo;
}
void Ente::desenhar()
{
    pGG->desenharEnte(this);
}
