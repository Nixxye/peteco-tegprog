#pragma once

#include "../../Entidades/Entidade.h"
#include "../../Entidades/Personagens/Jogador.h"
#include "../../Entidades/Obstaculos/Obst_Facil.h"
#include "../../Listas/ListaEntidades.h"
#include "../../Gerenciadores/Gerenciador_Colisoes.h"
#include "../Estado.h"
#include "../../Gerenciadores/Gerenciador_Salvamento.h"

namespace Estados
{
    namespace Fases
    {
        // Abstrata - Ente
        class Fase: public Ente, public Estado
        {
        protected:
            Listas::ListaEntidades jogadores;
            Listas::ListaEntidades obstaculos;
            Listas::ListaEntidades inimigos;
            Gerenciadores::Gerenciador_Colisoes gC;
            Gerenciadores::Gerenciador_Salvamento gS;
        public:
            Fase(int i = - 1);
            ~Fase();

            virtual void executar() = 0;
            void gerenciar_colisoes();
            void criarJogadores();
            void criarInimMedios();
            void salvar();
            // Substituído
            // void criarObstMedios();
            void criarCenario(std::string caminho);
        };
    }    
}
