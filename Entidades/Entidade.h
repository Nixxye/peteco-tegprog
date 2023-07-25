#pragma once

#include "../Ente.h"

namespace Entidades
{
    class Entidade: public Ente
    {
    protected:
        sf::Vector2f posicao;
    public:
        Entidade();
        ~Entidade();
        virtual void executar() = 0;
    };
}
