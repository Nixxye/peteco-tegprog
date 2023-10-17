#include "../Observers/ObserverTecla.h"
#include <iostream>

namespace Observers
{
    ObserverTecla::ObserverTecla(int n):
    Observer(),
    num(n)
    {

    }
    ObserverTecla::~ObserverTecla()
    {

    }
    void ObserverTecla::atualizar(sf::Keyboard::Key k)
    {
        std::cout << "Observer " << num << " - " << k << std::endl;
    }
}