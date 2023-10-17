#include "../Jogo.h"
#include <iostream>

Jogo::Jogo():
pGrafico(Gerenciadores::Gerenciador_Grafico::get_instancia()),
pEventos(Gerenciadores::Gerenciador_Eventos::get_instancia()),
pEstados(Gerenciadores::Gerenciador_Estados::get_instancia()),
propagandas(),
obs1(1),
obs2(2)
{
    Estados::Fases::FasePrimeira* fase1 = new Estados::Fases::FasePrimeira();
    executar();
}

Jogo::~Jogo()
{
    delete pGrafico;
    delete pEventos;
    delete pEstados;
}

void Jogo::executar()
{
    //propagandas.mostrarLogo();
    //propagandas.mostrarPropaganda();
    while (pGrafico->get_JanelaAberta())
    {
        pGrafico->limpar();
        pEventos->executar();
        pEstados->executar();
        pGrafico->mostrar();
    }
}
