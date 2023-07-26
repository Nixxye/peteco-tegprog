#include "../Fases/FasePrimeira.h"

namespace Fases
{
    FasePrimeira::FasePrimeira():
    Fase(),
    jogador1()
    {
        criarCenario(ARQUIVO_CENARIO_1);
    }
    FasePrimeira::~FasePrimeira()
    {

    }

    void FasePrimeira::executar()
    {
        jogador1.executar();
        jogador1.desenhar();
        obstaculos.desenhar();
    }
}