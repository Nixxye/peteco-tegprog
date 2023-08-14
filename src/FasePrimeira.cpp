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
        jogadores.executar();
        gerenciar_colisoes();
        jogadores.desenhar();
        obstaculos.desenhar();
    }
}