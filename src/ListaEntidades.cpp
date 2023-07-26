#include "../Listas/ListaEntidades.h"

namespace Listas
{
    ListaEntidades::ListaEntidades():
    LEs()
    {

    }
    ListaEntidades::~ListaEntidades()
    {

    }
    void ListaEntidades::incluir(Entidades::Entidade* pE)
    {
        LEs.incluir(pE);
    }
    void ListaEntidades::desenhar()
    {
        
    }
}
