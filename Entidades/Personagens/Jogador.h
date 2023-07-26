#pragma once

#include "Personagem.h"

namespace Entidades
{
    namespace Personagens
    {
        class Jogador: public Personagem
        {
        private:
            int pontos;
        public:
            Jogador();
            ~Jogador();
            void executar();
            void mover();
        };
    }
}