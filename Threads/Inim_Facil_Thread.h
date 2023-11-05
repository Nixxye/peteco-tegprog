#pragma once
#include "Thread.h"
#include "../Entidades/Personagens/Inim_Facil.h"

class Inim_Facil_Thread: public Thread, public Entidades::Personagens::Inim_Facil
{
private:
    void run();
    bool novoFrame;
public:
    Inim_Facil_Thread(sf::Vector2f pos, sf::Vector2f vel);
    void NovoFrame();
    ~Inim_Facil_Thread();
};