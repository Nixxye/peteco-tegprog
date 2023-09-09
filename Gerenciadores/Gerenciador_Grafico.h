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
        sf::RenderWindow* janela;
        sf::View camera;
        Gerenciador_Grafico();
        static Gerenciador_Grafico* instancia;
    public:
        ~Gerenciador_Grafico();

        void desenharEnte(Ente* pE);
        // Propaganda:
        void desenharTextura(sf::Texture* pT);
        const bool get_JanelaAberta() const;
        static Gerenciador_Grafico* get_instancia();
        void mostrar();
        void limpar();
        void fecharJanela();
        void resetarCamera();
        void centralizarCamera(sf::Vector2f p);
        sf::RenderWindow* get_Janela() const;
    };
}