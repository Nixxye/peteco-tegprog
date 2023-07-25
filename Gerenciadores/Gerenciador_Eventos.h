#pragma once

#include "../Gerenciadores/Gerenciador_Grafico.h"
#include <SFML/Graphics.hpp>

namespace Gerenciadores
{
    class Gerenciador_Eventos
    {
    private:
        Gerenciador_Grafico *pGrafico;
        static Gerenciador_Eventos* instancia;
        Gerenciador_Eventos();
        sf::Event evento;
    public:
        ~Gerenciador_Eventos();
        void executar();     
        static Gerenciador_Eventos* get_instancia();
    };
}
