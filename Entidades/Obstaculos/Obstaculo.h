#pragma once 

#include "../Entidade.h"

namespace Entidades
{
    namespace Obstaculos
    {
        class Obstaculo: public Entidade
        {
        protected:
            bool danoso;
        public:
            Obstaculo(sf::Vector2f pos = sf::Vector2f(0.f, 0.f), bool dano = false);
            ~Obstaculo();
            virtual void executar() = 0;
        };
    }
}