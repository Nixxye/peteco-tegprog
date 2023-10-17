#pragma once

#include "../Gerenciadores/Gerenciador_Grafico.h"
#include <SFML/Graphics.hpp>
#include <list>

namespace Observers
{
    class Observer;
}

namespace Gerenciadores
{
    // Singleton &
    // Subject do Design Patter Observer.
    class Gerenciador_Eventos
    {
    private:
        Gerenciador_Grafico *pGrafico;
        static Gerenciador_Eventos* instancia;
        Gerenciador_Eventos();
        sf::Event evento;

        std::list<Observers::Observer*> lista_observers;
        std::list<Observers::Observer*>::iterator it;
    public:
        ~Gerenciador_Eventos();
        void executar();     
        static Gerenciador_Eventos* get_instancia();
        // Elementos do Subject:
        void anexar(Observers::Observer* o);
        void remover(Observers::Observer* o);
        void notificar(sf::Keyboard::Key k);
    };
}
