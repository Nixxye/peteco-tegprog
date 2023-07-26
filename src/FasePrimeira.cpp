#include "../Fases/FasePrimeira.h"

namespace Fases
{
    FasePrimeira::FasePrimeira():
    Fase(),
    jogador1()
    {

    }
    FasePrimeira::~FasePrimeira()
    {

    }

    void FasePrimeira::executar()
    {
        jogador1.executar();
        jogador1.desenhar();
    }
}