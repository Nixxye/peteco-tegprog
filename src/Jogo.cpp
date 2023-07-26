#include "../Jogo.h"
#include <iostream>
Jogo::Jogo():
pGrafico(Gerenciadores::Gerenciador_Grafico::get_instancia()),
pEventos(Gerenciadores::Gerenciador_Eventos::get_instancia()),
fase1()
{
    executar();
}

Jogo::~Jogo()
{
    pGrafico = nullptr;
    pEventos = nullptr;
  std::cout<<"C";  
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