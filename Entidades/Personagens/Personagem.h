#pragma once

#include "../Entidade.h"

namespace Entidades
{
    namespace Personagens
    {
        class Personagem: public Entidade
        {
        protected:
            int num_vidas;
        public:
            Personagem(sf::Vector2f pos = sf::Vector2f(0.f, 0.f), sf::Vector2f vel = sf::Vector2f(0.f, 0.f));
            ~Personagem();
            virtual void mover() = 0;
            virtual void atualizar() = 0;
        };
    }
}
