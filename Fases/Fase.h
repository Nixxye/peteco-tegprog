#pragma once

#include "../Entidades/Entidade.h"
#include "../Entidades/Personagens/Jogador.h"
#include "../Entidades/Obstaculos/Obst_Facil.h"
#include "../Listas/ListaEntidades.h"
#include "../Gerenciadores/Gerenciador_Colisoes.h"

namespace Fases
{
    // Abstrata - Ente
    class Fase: public Ente
    {
    protected:
        Listas::ListaEntidades jogadores;
        Listas::ListaEntidades obstaculos;
        Listas::ListaEntidades inimigos;
        Gerenciadores::Gerenciador_Colisoes gC;
    public:
        Fase();
        ~Fase();

        virtual void executar() = 0;
        void gerenciar_colisoes();
        void criarJogadores();
        void criarInimMedios();
        // Substituído
        // void criarObstMedios();
        void criarCenario(std::string caminho);
    };
}