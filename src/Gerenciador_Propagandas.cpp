#include "../Propagandas/Gerenciador_Propagandas.h"

#include <random>

namespace Propagandas
{
    GerenciadorPropagandas::GerenciadorPropagandas():
    logo(),
    karoshi()
    {

    }
    GerenciadorPropagandas::~GerenciadorPropagandas()
    {
        
    }
    void GerenciadorPropagandas::mostrarPropaganda()
    {
        karoshi.mostrarPropaganda(5000);
    }
    void GerenciadorPropagandas::mostrarLogo()
    {
        logo.mostrarPropaganda(5000);
    }
}