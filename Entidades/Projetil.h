#pragma once

#include "Entidade.h"

namespace Entidades
{
    class Projetil
    {
    private:
    public:
        Projetil();
        ~Projetil();
        void mover();
        void atualizar();
    };
}