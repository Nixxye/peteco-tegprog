#pragma once

#include "../Ente.h"

// Largura e Altura padrão para as entidades
#define TAM 50.f

namespace Entidades
{
    class Entidade: public Ente
    {
    protected:
        sf::Vector2f posicao;
        bool nochao;
        sf::Vector2f velocidade;
    public:
        Entidade(sf::Vector2f pos = sf::Vector2f(0.f, 0.f));
        ~Entidade();
        // Se for virtual puro n dá para fazer o cast (n sei o pq);
        virtual void executar()=0;
        // Colocar a entidade com a qual colidiu para fazer mais ações:
        virtual void colidir();
        const sf::Vector2f getPosicao() const { return corpo.getPosition(); }
        const sf::Vector2f getTamanho() const { return corpo.getSize(); }
        void setPosicao(sf::Vector2f p);
        void setNochao(bool n) { nochao = n; }
        const sf::Vector2f getVelocidade () const { return velocidade; }
        void setVelocidade(sf::Vector2f v);
    };
}
