#include "../Fases/Fase.h"

#include <fstream>
#include <string>
#include <iostream>

namespace Fases
{
    Fase::Fase():
    jogadores(),
    obstaculos(),
    inimigos()
    {
        gC.set_inimigos(&inimigos);
        gC.set_jogadores(&jogadores);
        gC.set_obstaculos(&obstaculos);
        criarJogadores();
    }
    Fase::~Fase()
    {

    }

    void Fase::gerenciar_colisoes()
    {
        gC.colisao_simples();
    }
    void Fase::criarJogadores()
    {
        jogadores.incluir(static_cast<Entidades::Entidade*>(new Entidades::Personagens::Jogador()));
    }
    void Fase::criarInimMedios()
    {

    }
    void Fase::criarCenario(std::string caminho)
    {
        std::ifstream arquivo(caminho);
        if (!arquivo)
        {
            std::cout<<"Não foi possível acessar o arquivo de cenário."<<std::endl;
            exit(1);
        }
        std::string linha;
        
        Entidades::Entidade* aux = nullptr;

        int j = 0;
        for (int i = 0; std::getline(arquivo, linha); i++)
        {
            j = 0;
            for (char tipo : linha)
            {
                switch (tipo)
                {
                    // Plataforma:
                case '0':
                    aux = static_cast<Entidades::Entidade*> (new Entidades::Obstaculos::Obst_Facil(sf::Vector2f(j * TAM, i * TAM)));
                    if (aux)
                        obstaculos.incluir(aux);
                    break;
                }
                j++;
            }
        }
        arquivo.close();
    }
}