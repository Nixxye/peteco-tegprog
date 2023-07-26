#pragma once 

#include "Obstaculo.h"

namespace Entidades
{
    namespace Obstaculos
    {
        class Obst_Facil: public Obstaculo
        {
        private:

        public:
            Obst_Facil(sf::Vector2f pos = sf::Vector2f(0.f, 0.f));
            ~Obst_Facil();
            void executar();
        };
    }
}