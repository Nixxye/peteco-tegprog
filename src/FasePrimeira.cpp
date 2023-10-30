#include "../Estados/Fases/FasePrimeira.h"

namespace Estados
{
    namespace Fases
    {
        FasePrimeira::FasePrimeira():
        Fase(1)
        {
            criarCenario(ARQUIVO_CENARIO_1);
        }
        FasePrimeira::~FasePrimeira()
        {

        }

        void FasePrimeira::executar()
        {
            jogadores.executar();
            inimigos.executar();
            gerenciar_colisoes();
            pGG->centralizarCamera((*(jogadores.get_primeiro()))->getPosicao());
            jogadores.desenhar();
            inimigos.desenhar();
            obstaculos.desenhar();
        }
    }    
}
