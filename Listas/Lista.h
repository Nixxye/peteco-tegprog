#pragma once

namespace Listas
{
    template<class TL>
    class Lista
    {
    public:
        List();
        ~List();
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
            Elemento<TL>* pUltimo;
        public:
            void limpar()
            {
                
            }
    };
}