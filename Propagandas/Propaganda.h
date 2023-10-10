#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "../Gerenciadores/Gerenciador_Grafico.h"

namespace Propagandas
{
    class Propaganda
    {
    protected:
        std::vector<sf::Texture *> imgs;
        int n_imgs;
        Gerenciadores::Gerenciador_Grafico* pGrafico;
    public:
        Propaganda();
        ~Propaganda();
        bool carregarImg(std::string caminho);
        void mostrarPropaganda(float time);
    };
}