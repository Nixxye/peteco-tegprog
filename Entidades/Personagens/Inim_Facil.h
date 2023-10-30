#pragma once

#include "Inimigo.h"

namespace Entidades
{
    namespace Personagens
    {
        // Inimigo 2
        class Inim_Facil: public Inimigo
        {
        private:
            int m;
        public:
            Inim_Facil(sf::Vector2f pos = sf::Vector2f(0.f, 0.f), sf::Vector2f vel = sf::Vector2f(0.f, 0.f));
            ~Inim_Facil();
            void atualizar();
            void mover();
            void salvar(std::ostringstream* entrada);
        };
    }
}