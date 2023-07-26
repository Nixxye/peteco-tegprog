#pragma once

#include "Fase.h"

#define ARQUIVO_CENARIO_1 "Design/Fase1/Cenario/cenario1.txt"

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