#pragma once

#include "../Listas/ListaEntidades.h"
// Ver se há outra maneira de usar o iterator sem incluir a Lista original e apenas a Lista de Entidades.
#include "../Listas/Lista.h"
#include "../Entidades/Entidade.h"

namespace Gerenciadores
{
    class Gerenciador_Colisoes
    {
    private:
        Listas::ListaEntidades *obstaculos;
        Listas::ListaEntidades *jogadores;
        Listas::ListaEntidades *inimigos;
    public:
        Gerenciador_Colisoes();
        ~Gerenciador_Colisoes();

        void set_obstaculos(Listas::ListaEntidades *o) { if (o) { obstaculos = o; }}
        void set_jogadores(Listas::ListaEntidades *j) { if (j) { jogadores = j; }}
        void set_inimigos(Listas::ListaEntidades *i) { if (i) { inimigos = i; }}
        void colisao_simples();
        bool colidiu(Entidades::Entidade* e1, Entidades::Entidade* e2);

    };
}