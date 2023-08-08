#include "../Propagandas/Propaganda.h"

namespace Propagandas
{
    Propaganda::Propaganda():
    n_imgs(0)
    {

    }
    Propaganda::~Propaganda()
    {
        for (int i = 0; i < n_imgs; i++)
            delete imgs[i];
        imgs.clear();
    }
    void Propaganda::carregarImg(string caminho)
    {
        sf::Texture* aux = new sf::Texture;
        if (!aux->loadFromFile(caminho))
        {
            delete aux;
            return;
        }
        imgs.push_back(aux);
        n_imgs++;       
    }
}