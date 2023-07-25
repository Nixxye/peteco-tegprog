#pragma once


#include "Gerenciadores/Gerenciador_Grafico.h"
#include <SFML/Graphics.hpp>

// Abstrata
class Ente
{
protected:
    int id;
    static Gerenciadores::Gerenciador_Grafico* pGG;
    sf::RectangleShape corpo;
public:
    Ente();
    ~Ente();
    virtual void executar() = 0;
    const sf::RectangleShape* get_corpo() const;
    void desenhar();
};