#pragma once

#include <SFML/Graphics.hpp>

#include "Gerenciadores/Gerenciador_Grafico.h"
#include "Gerenciadores/Gerenciador_Eventos.h"
#include "Fases/FasePrimeira.h"

class Jogo
{
private:
    Gerenciadores::Gerenciador_Grafico* pGrafico;
    Gerenciadores::Gerenciador_Eventos* pEventos;
    Fases::FasePrimeira fase1;
public:
    Jogo();
    ~Jogo();
    void executar();
};