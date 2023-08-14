#include "../Fases/FasePrimeira.h"

namespace Fases
{
    FasePrimeira::FasePrimeira():
    Fase()
    {
        criarCenario(ARQUIVO_CENARIO_1);
    }
    FasePrimeira::~FasePrimeira()
    {

    }

    void FasePrimeira::executar()
    {
        jogador1.executar();
        gerenciar_colisoes();
        jogador1.desenhar();
        obstaculos.desenhar();
    }
}