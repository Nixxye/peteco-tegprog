#include "../Jogo.h"
#include <iostream>
Jogo::Jogo():
pGrafico(Gerenciadores::Gerenciador_Grafico::get_instancia()),
pEventos(Gerenciadores::Gerenciador_Eventos::get_instancia())
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
        pGrafico->mostrar();
    }
}