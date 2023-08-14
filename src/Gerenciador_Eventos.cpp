#include "../Gerenciadores/Gerenciador_Eventos.h"

#include <iostream>

namespace Gerenciadores
{
    Gerenciador_Eventos* Gerenciador_Eventos::instancia(nullptr);

    Gerenciador_Eventos::Gerenciador_Eventos():
    pGrafico(Gerenciador_Grafico::get_instancia())
    {

    }
    Gerenciador_Eventos::~Gerenciador_Eventos()
    {
        pGrafico = nullptr;
    }
    Gerenciador_Eventos* Gerenciador_Eventos::get_instancia()
    {
        if (!instancia)
            instancia = new Gerenciador_Eventos();
        return instancia;
    }
    void Gerenciador_Eventos::executar()
    {
        while (pGrafico->get_Janela()->pollEvent(evento))
            switch (evento.type)
            {
            case sf::Event::Closed:
                pGrafico->fecharJanela();
                break;
            case sf::Event::KeyPressed:
                // Dica: Padrão observer.
                break;
            default:
                break;
            }
    }
}