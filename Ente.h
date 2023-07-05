#pragma once

#include <SFML/Graphics.hpp>

class Ente
{
private:
    sf::RectangleShape corpo;
public:
    Ente();
    ~Ente();
    const sf::RectangleShape* get_corpo() const;
};