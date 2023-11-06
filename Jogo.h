#pragma once

#include <SFML/Graphics.hpp>

#include "Gerenciadores/Gerenciador_Grafico.h"
#include "Gerenciadores/Gerenciador_Eventos.h"
#include "Gerenciadores/Gerenciador_Estados.h"
#include "Estados/Fases/FasePrimeira.h"
#include "Propagandas/Gerenciador_Propagandas.h"
#include "Observers/ObserverTecla.h"

class Jogo
{
private:
    Gerenciadores::Gerenciador_Grafico* pGrafico;
    Gerenciadores::Gerenciador_Eventos* pEventos;
    Gerenciadores::Gerenciador_Estados* pEstados;
    Propagandas::GerenciadorPropagandas propagandas;
    // Comentar dps:
    Observers::ObserverTecla* obs1;
    Observers::ObserverTecla* obs2;
    
public:
    Jogo();
    ~Jogo();
    void executar();
};