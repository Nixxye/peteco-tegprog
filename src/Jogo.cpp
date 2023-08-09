#include "../Jogo.h"
#include <iostream>

Jogo::Jogo():
pGrafico(Gerenciadores::Gerenciador_Grafico::get_instancia()),
pEventos(Gerenciadores::Gerenciador_Eventos::get_instancia()),
fase1(),
propagandas()
{
    propagandas.mostrarLogo();
    propagandas.mostrarPropaganda();
    executar();
}

Jogo::~Jogo()
{
    delete pGrafico;
    delete pEventos;
}

void Jogo::executar()
{
    while (pGrafico->get_JanelaAberta())
    {
        pGrafico->limpar();
        pEventos->executar();
        fase1.executar();
        pGrafico->mostrar();
    }
}