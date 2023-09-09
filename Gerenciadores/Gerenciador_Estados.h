#pragma once

#include <vector>

namespace Estados
{
    class Estado;
}
/*
Estados:
0 - Menu Principal
1 - Fase 1
*/

namespace Gerenciadores
{
    class Gerenciador_Estados
    {
    private:
        int estadoAtual;
        std::vector<Estados::Estado*> estados;
        static Gerenciador_Estados* instancia;
        
        Gerenciador_Estados();
    public:
        ~Gerenciador_Estados();
        
        static Gerenciador_Estados* get_instancia();
        void setEstadoAtual (int i);
        void addEstado (Estados::Estado* pEstado);
        void executar();
    };
}