#include "../Ente.h"

Gerenciadores::Gerenciador_Grafico* Ente::pGG(Gerenciadores::Gerenciador_Grafico::get_instancia());

Ente::Ente():
id(0)
{

}

Ente::~Ente()
{

}  
// const sf::RectangleShape* Ente::get_corpo() const
// {
//     return &corpo;
// }
// void Ente::desenhar()
// {
//     pGG->desenharEnte(this);
// }
