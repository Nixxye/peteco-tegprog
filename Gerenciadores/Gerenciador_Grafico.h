#pragma once

#include <SFML/Graphics.hpp>

class Ente;

//Dimensões da janela
#define LARGURA_TELA 800.0
//Dimensões da janela
#define ALTURA_TELA 600.0


namespace Gerenciadores
{
    // Infraestrutura - SFML
    class Gerenciador_Grafico
    {
    private:
        Gerenciador_Grafico();
        sf::RenderWindow* janela;
        static Gerenciador_Grafico* instancia;
    public:
        ~Gerenciador_Grafico();

        void desenharEnte(Ente* pE);
        const bool get_JanelaAberta() const;
        static Gerenciador_Grafico* get_instancia();
        void mostrar();
        void limpar();
        void fecharJanela();
        sf::RenderWindow* get_Janela() const;
    };
}