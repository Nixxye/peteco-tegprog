#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

namespace Propagandas
{
    class Propaganda
    {
    protected:
        std::vector<sf::Texture *> imgs;
        int n_imgs;
        // Som???
    public:
        Propaganda(const int n);
        ~Propaganda();
        void carregarImg(string caminho);
        virtual void mostrarPropaganda() = 0;
    };
}