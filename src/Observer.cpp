#include "../Observers/Observer.h"

namespace Observers
{
    Gerenciadores::Gerenciador_Eventos * Observer::pGer_Eventos(Gerenciadores::Gerenciador_Eventos::get_instancia());
    Observer::Observer()
    {
        pGer_Eventos->anexar(this);
    }
    Observer::~Observer()
    {
        //pGer_Eventos->remover(this); CAUSANDO SEG FAULT. . .
    }

}