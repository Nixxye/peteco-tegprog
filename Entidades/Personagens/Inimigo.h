#pragma once

#include "Personagem.h"

namespace Entidades
{
    namespace Personagens
    {
        class Inimigo: public Personagem
        {
        protected:
            int nivel_maldade;
        public:
            Inimigo(sf::Vector2f pos = sf::Vector2f(0.f, 0.f), sf::Vector2f vel = sf::Vector2f(0.f, 0.f));
            ~Inimigo();
            virtual void mover() = 0;
            virtual void atualizar() = 0;
        };
    }
}