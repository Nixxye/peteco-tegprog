#pragma once

#include "LogoPeteco.h"

namespace Propagandas
{
    class GerenciadorPropagandas
    {
    private:
        LogoPeteco logo;
        int n_propagandas;
    public:
        LogoPeteco();
        ~LogoPeteco();
        void mostrarPropaganda();
        void mostrarLogo();
    };
}