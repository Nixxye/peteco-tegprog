#pragma once 

#include "Obstaculo.h"

namespace Entidades
{
    namespace Obstaculos
    {
        class Obst_Medio: public Obstaculo
        {
        private:

        public:
            Obst_Medio();
            ~Obst_Medio();
            void executar();
        };
    }
}