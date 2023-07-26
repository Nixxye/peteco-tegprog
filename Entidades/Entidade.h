#pragma once

#include "../Ente.h"

namespace Entidades
{
    class Entidade: public Ente
    {
    protected:
        sf::RectangleShape corpo;
        sf::Vector2f posicao;
    public:
        Entidade();
        ~Entidade();
        // Era método da classe Ente:
        void desenhar();
        const sf::RectangleShape* get_corpo() const;
        virtual void executar() = 0;
    };
}
