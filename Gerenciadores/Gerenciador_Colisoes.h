#pragma once

#include "../Listas/ListaEntidades.h"
#include "../Listas/Lista.h"
#include "../Entidades/Entidade.h"
#include "../Threads/Inim_Facil_Thread.h"


namespace Gerenciadores
{
    class Gerenciador_Colisoes
    {
    private:
        Listas::ListaEntidades *obstaculos;
        Listas::ListaEntidades *jogadores;
        Listas::ListaEntidades *inimigos;
        Inim_Facil_Thread** IThread;
    public:
        Gerenciador_Colisoes();
        ~Gerenciador_Colisoes();

        void set_obstaculos(Listas::ListaEntidades *o) { if (o) { obstaculos = o; }}
        void set_jogadores(Listas::ListaEntidades *j) { if (j) { jogadores = j; }}
        void set_inimigos(Listas::ListaEntidades *i) { if (i) { inimigos = i; }}
        void set_IThread(Inim_Facil_Thread** i) { if (i) { IThread = i; }}
        void colisao_simples();
        // Tipos de colisão em relação à e1: 0 - sem colisão, 1 - pela esquerda, 2 - por cima, 3 - pela direita, 4 - por baixo.
        // Melhor trocar por um enum depois:
        int colidiu(Entidades::Entidade* e1, Entidades::Entidade* e2);

    };
}