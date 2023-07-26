#pragma once

namespace Listas
{
    template<class TL>
    class Lista
    {
    private:
        // Classe aninhada privada
        template <class TE>
        class Elemento
        {
        private:
            TE* pinfo;
            Elemento<TE>* pProx;
        public:
            Elemento():
            pinfo(nullptr),
            pProx(nullptr)
            {

            }
            ~Elemento()
            {
                // deletar pinfo se for alocar com new.
                pinfo = nullptr;
                pProx = nullptr;
            }
            TE* get_pinfo() { return pinfo; }
            Elemento<TE>* get_pProx() { return pProx; }

            void set_pinfo(TE* pi) { if (pi) { pinfo = pi; } }
            void set_pProx(Elemento<TE>* pP) { if (pP) { pProx = pP; } } 
        };
        private:
            Elemento<TL>* pPrimeiro;
            int tamanho;
        public:
            Lista():
            pPrimeiro(nullptr),
            tamanho(0)
            {

            }
            ~Lista()
            {
                limpar();
            }
            void limpar()
            {
                Elemento<TL>* aux = nullptr;
                while(pPrimeiro)
                {
                    aux = pPrimeiro;
                    pPrimeiro = pPrimeiro->get_pProx();
                    if (aux)
                        delete aux;
                }
                tamanho = 0;
                pPrimeiro = nullptr;
            }
            const int get_tamanho() const
            {
                return tamanho;
            }
            void incluir(TL* elem)
            {
                if (!elem)
                    return;
                Elemento<TL>* aux = new Elemento<TL>();
                if (aux)
                {
                    aux->set_pinfo(elem);
                    aux->set_pProx(pPrimeiro);
                    pPrimeiro = aux;
                    tamanho++;
                }
            }
            // VER SE VAMOS FAZER O ITERATOR OU N
    };
}