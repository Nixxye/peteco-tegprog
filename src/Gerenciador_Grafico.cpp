#include "../Gerenciadores/Gerenciador_Grafico.h"
#include "Gerenciador_Grafico.h"

namespace Gerenciadores
{
    Gerenciador_Grafico* Gerenciador_Grafico::instancia(nullptr);

    Gerenciador_Grafico::Gerenciador_Grafico():
    janela(new sf::RenderWindow(sf::VideoMode(LARGURA_TELA, ALTURA_TELA), "PETECO-TEC_PROG"))
    {
        //colocar estático como o murilo disse:
        janela->setFramerateLimit(60);
    }
    Gerenciador_Grafico::~Gerenciador_Grafico()
    {
        delete janela;
    }
    void Gerenciador_Grafico::desenharEnte(Ente *pE)
    {
        if (pE)
            janela->draw(*pE->get_corpo());
    }
    const bool Gerenciador_Grafico::get_JanelaAberta() const
    {
        return janela->isOpen();
    }
    Gerenciador_Grafico *Gerenciador_Grafico::get_instancia()
    {
        if (!instancia)
            instancia = new Gerenciador_Grafico();
        return instancia;
    }
    void Gerenciador_Grafico::mostrar()
    {
        if (get_JanelaAberta())
            janela->display();
    }
    void Gerenciador_Grafico::limpar()
    {
        if (get_JanelaAberta())
            janela->clear();
    }
    void Gerenciador_Grafico::fecharJanela()
    {
        if (get_JanelaAberta())
            janela->close();       
    }
}