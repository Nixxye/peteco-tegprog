#include "../Propagandas/LogoPeteco.h"

namespace Propagandas
{
    LogoPeteco::LogoPeteco()
    {
        carregarImg("Propagandas/Imagens/LogoPeteco1.png");
    }
    LogoPeteco::~LogoPeteco()
    {

    }
    void LogoPeteco::mostrarPropaganda()
    {
        for (int i = 0; i < n_imgs; i++)
        {
            pGrafico->limpar();
            pGrafico->desenharTextura(imgs[i]);
            pGrafico->mostrar();
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        }
    }
}