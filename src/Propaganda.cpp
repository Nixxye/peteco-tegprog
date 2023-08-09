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
    bool Propaganda::carregarImg(std::string caminho)
    {
        sf::Texture* aux = new sf::Texture;
        if (!aux->loadFromFile(caminho))
        {
            std::cout<<"Textura não carregada"<<std::endl;
            delete aux;
            return false;
        }
        imgs.push_back(aux);
        n_imgs++;  
        return true;    
    }
    void Propaganda::mostrarPropaganda(float time)
    {
        for (int i = 0; i < n_imgs; i++)
        {
            pGrafico->limpar();
            pGrafico->desenharTextura(imgs[i]);
            pGrafico->mostrar();
            std::this_thread::sleep_for(std::chrono::milliseconds((int) time / n_imgs));
        }
    }
}