#include "../Estados/Estado.h"

namespace Estados
{
    Gerenciadores::Gerenciador_Estados* Estado::pGE(Gerenciadores::Gerenciador_Estados::get_instancia());

    Estado::Estado(int i):
    id(i)
    {
        pGE->addEstado(this);
    }
    Estado::~Estado()
    {

    }
    int Estado::get_id() const
    {
        return id;
    }
}