#pragma once

#include <SFML/Graphics.hpp>

#include "Gerenciadores/Gerenciador_Grafico.h"
#include "Gerenciadores/Gerenciador_Eventos.h"
#include "Gerenciadores/Gerenciador_Estados.h"
#include "Estados/Fases/FasePrimeira.h"
#include "Propagandas/Gerenciador_Propagandas.h"

class Jogo
{
private:
    Gerenciadores::Gerenciador_Grafico* pGrafico;
    Gerenciadores::Gerenciador_Eventos* pEventos;
    Gerenciadores::Gerenciador_Estados* pEstados;
    Estados::Fases::FasePrimeira fase1;
    Propagandas::GerenciadorPropagandas propagandas;
public:
    Jogo();
    ~Jogo();
    void executar();
};