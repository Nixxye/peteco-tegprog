#pragma once

#include "../Ente.h"

namespace Fases
{
    // Abstrata - Ente
    class Fase: public Ente
    {
    protected:
    public:
        Fase();
        ~Fase();

        virtual void executar() = 0;
        void gerenciar_colisoes();
        void criarInimMedios();
        void criarObstMedios();
    };
}