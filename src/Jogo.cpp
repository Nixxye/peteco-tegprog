#include "../Jogo.h"

Jogo::Jogo():
pGrafico(Gerenciadores::Gerenciador_Grafico::get_instancia())
{
    while (pGrafico->get_JanelaAberta())
    {
        pGrafico->limpar();
        /*
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        */
       pGrafico->mostrar();
    }
}

Jogo::~Jogo()
{
    
}