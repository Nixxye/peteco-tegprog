#include "../Gerenciadores/Gerenciador_Eventos.h"
#include "../Observers/Observer.h"
#include <iostream>

namespace Gerenciadores
{
    Gerenciador_Eventos* Gerenciador_Eventos::instancia(nullptr);

    Gerenciador_Eventos::Gerenciador_Eventos():
    pGrafico(Gerenciador_Grafico::get_instancia()),
    lista_observers(),
    it()
    {
        lista_observers.clear();
    }
    Gerenciador_Eventos::~Gerenciador_Eventos()
    {
        pGrafico = nullptr;
        for (it = lista_observers.begin(); it != lista_observers.end(); it++)
        {
            //delete *it;
        }
        lista_observers.clear();
    }
    Gerenciador_Eventos* Gerenciador_Eventos::get_instancia()
    {
        if (!instancia)
            instancia = new Gerenciador_Eventos();
        return instancia;
    }
    void Gerenciador_Eventos::executar()
    {
        while (pGrafico->get_Janela()->pollEvent(evento))
            switch (evento.type)
            {
            case sf::Event::Closed:
                pGrafico->fecharJanela();
                break;
            case sf::Event::KeyPressed:
                // Dica: Padrão observer.
                notificar(evento.key.code);
                break;
            default:
                break;
            }
    }
    void Gerenciador_Eventos::anexar(Observers::Observer* o)
    {
        if (o)
            lista_observers.push_back(o);
    }
    void Gerenciador_Eventos::remover(Observers::Observer* o)
    {
        lista_observers.remove(o);
    }
    void Gerenciador_Eventos::notificar(sf::Keyboard::Key k)
    {
        for (it = lista_observers.begin(); it != lista_observers.end(); it++)
        {
            (*it)->atualizar(k);
        }
    }
}