#pragma once

#include "../Gerenciadores/Gerenciador_Estados.h"

namespace Estados
{
    class Estado
    {
    protected:
        const int id; 
        static Gerenciadores::Gerenciador_Estados* pGE;
    public:
        Estado(int i = -1);
        virtual ~Estado();

        int get_id() const;
        
        virtual void executar () = 0;
    };
}
