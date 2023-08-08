#include "../Propagandas/Propaganda.h"
#include <iostream>

namespace Propagandas
{
    Propaganda::Propaganda():
    n_imgs(0),
    pGrafico(Gerenciadores::Gerenciador_Grafico::get_instancia())
    {

    }
    Propaganda::~Propaganda()
    {
        for (int i = 0; i < n_imgs; i++)
            delete imgs[i];
        imgs.clear();
        pGrafico = nullptr;
    }
    void Propaganda::carregarImg(std::string caminho)
    {
        sf::Texture* aux = new sf::Texture;
        if (!aux->loadFromFile(caminho))
        {
            std::cout<<"Textura não carregada"<<std::endl;
            delete aux;
            return;
        }
        imgs.push_back(aux);
        n_imgs++;       
    }
}