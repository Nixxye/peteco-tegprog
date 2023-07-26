#pragma once

#include "Lista.h"
#include "../Entidades/Entidade.h"

namespace Listas
{   
    // Coleção
    class ListaEntidades
    {
    private:
        Lista<Entidades::Entidade> LEs;
    public:
        ListaEntidades();
        ~ListaEntidades();
        void incluir(Entidades::Entidade* pE);
        // void percorrer();
        void desenhar();
    };
}