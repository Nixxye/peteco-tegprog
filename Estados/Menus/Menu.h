#pragma once 

#include "../Estado.h"

namespace Estados
{
    namespace Menus
    {
        class Menu: public Estado
        {
        protected:

        public:
            Menu(int i = - 1);
            ~Menu();

            virtual void executar();
        };
    }
}