#pragma once

#include "../Ente.h"

// Largura e Altura padrão para as entidades
#define TAM 50.f

namespace Entidades
{
    class Entidade: public Ente
    {
    protected:
        sf::Vector2f posicao;
    public:
        Entidade(sf::Vector2f pos = sf::Vector2f(0.f, 0.f));
        ~Entidade();
        virtual void executar() = 0;
    };
}
