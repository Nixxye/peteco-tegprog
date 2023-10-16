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
                if (pinfo)
                    delete pinfo;
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
            // Classe aninhada pública:
            class Iterador
            {
            private:
                Elemento<TL>* atual;
            public:
                Iterador(Elemento<TL>* a = nullptr):
                atual(a)
                {

                }
                ~Iterador()
                {
                    atual = nullptr;
                }
                Iterador& operator++()
                {
                    atual = atual->get_pProx();
                    return *this;
                }
                Iterador& operator++(int)
                {
                    atual = atual->get_pProx();
                    return *this;
                }
                bool operator==(const Elemento<TL>* outro) const
                {
                    return atual == outro;
                }
                bool operator!=(const Elemento<TL>* outro) const
                {
                    return !(atual == outro);
                }
                void operator=(const Elemento<TL>* outro)
                {
                    atual = outro;
                }
                TL* operator*()
                {
                    return atual->get_pinfo();
                }
                const Elemento<TL>* get_atual() const
                {
                    return atual;
                }
            };
            Iterador get_primeiro()
            {
                return Iterador(pPrimeiro);
            }
    };
}