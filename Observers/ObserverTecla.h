#pragma once

#include "Observer.h"

namespace Observers
{
    class ObserverTecla: public Observer
    {
    private:
        const int num;
    public:
        ObserverTecla(int n = 0);
        ~ObserverTecla();

        void atualizar(sf::Keyboard::Key k);
    };
}