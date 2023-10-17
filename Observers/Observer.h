#pragma once

#include <SFML/Graphics.hpp>
#include "../Gerenciadores/Gerenciador_Eventos.h"

namespace Observers
{
    // Observer Design Pattern
    class Observer
    {
    protected:
        static Gerenciadores::Gerenciador_Eventos* pGer_Eventos;
    public:
        Observer();
        virtual ~Observer();

        virtual void atualizar(sf::Keyboard::Key k) = 0;
    };
}