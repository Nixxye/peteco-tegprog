#pragma once

#include "../Gerenciadores/Gerenciador_Grafico.h"

namespace Gerenciadores
{
    class Gerenciador_Eventos
    {
    private:
        Gerenciador_Grafico *pGrafico;
        Gerenciador_Eventos();
    public:
        ~Gerenciador_Eventos();
        void run();     
    };
}
