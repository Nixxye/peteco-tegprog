#pragma once

#include <SFML/Graphics.hpp>

class Ente;

// Ao utilizar o Gerenciador Gráfico em duas threads separadas será necessário alterar o padrão singleton como no site: https://refactoring.guru/design-patterns/singleton/cpp/example#example-1.

//Dimensões da janela
#define LARGURA_TELA 800.0
//Dimensões da janela
#define ALTURA_TELA 600.0
// Singleton Design Pattern
namespace Gerenciadores
{
    // Infraestrutura - SFML
    class Gerenciador_Grafico
    {
    private:
        Gerenciador_Grafico();
        sf::RenderWindow* janela;
        sf::View camera;
        // Instância do padrão Singleton.
        static Gerenciador_Grafico* instancia; 
    public:
        ~Gerenciador_Grafico();
        void desenharEnte(Ente* pE);
        // Propaganda:
        void desenharTextura(sf::Texture* pT);
        const bool get_JanelaAberta() const;
        /*
            Método estático que controla o acessor à instância singleton.
            Na primeira vez um objeto é criado e colocado no atributo estático instância,
            nas próximas ele retorna a instância.
        */
        static Gerenciador_Grafico* get_instancia();
        void mostrar();
        void limpar();
        void fecharJanela();
        void resetarCamera();
        void centralizarCamera(sf::Vector2f p);
        sf::RenderWindow* get_Janela() const;
    };
}