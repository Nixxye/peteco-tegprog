#pragma once

#include "Fase.h"

namespace Fases
{
    // Fase 1
    class FasePrimeira: public Fase
    {
    private:
    // Teste:
        Entidades::Personagens::Jogador jogador1;
    public:
        FasePrimeira();
        ~FasePrimeira();

        void executar();
    };
}