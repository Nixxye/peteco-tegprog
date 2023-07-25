#pragma once

#include "Fase.h"

namespace Fases
{
    // Fase 1
    class FasePrimeira: public Fase
    {
    private:

    public:
        FasePrimeira();
        ~FasePrimeira();

        void executar();
    };
}