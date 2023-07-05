#pragma once

#include <SFML/Graphics.hpp>

#include "Gerenciadores/Gerenciador_Grafico.h"

class Jogo
{
private:
    Gerenciadores::Gerenciador_Grafico* pGrafico;
public:
    Jogo();
    ~Jogo();
};