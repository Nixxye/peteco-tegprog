#pragma once

#include <SFML/Graphics.hpp>

#include "../Ente.h"

//Fazer MEDIATOR
//E singleton

//Dimensões da janela
#define LARGURA_TELA 800.0
//Dimensões da janela
#define ALTURA_TELA 600.0


namespace Gerenciadores
{
    class Gerenciador_Grafico
    {
    private:
        sf::RenderWindow* janela;
        Gerenciador_Grafico();
        static Gerenciador_Grafico* instancia;
    public:
        ~Gerenciador_Grafico();

        void desenharEnte(Ente* pE);
        const bool get_JanelaAberta() const;
        static Gerenciador_Grafico* get_instancia();
        void mostrar();
        void limpar();
    };
}