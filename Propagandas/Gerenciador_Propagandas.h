#pragma once

#include "LogoPeteco.h"
#include "Karoshi.h"

namespace Propagandas
{
    class GerenciadorPropagandas
    {
    private:
        LogoPeteco logo;
        Karoshi karoshi;
        int n_propagandas;
    public:
        GerenciadorPropagandas();
        ~GerenciadorPropagandas();
        void mostrarPropaganda();
        void mostrarLogo();
    };
}