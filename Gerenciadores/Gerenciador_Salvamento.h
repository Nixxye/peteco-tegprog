#include <iostream>
#include <sstream>
#include <fstream>
#include "json.hpp"

namespace Gerenciadores
{
    class Gerenciador_Salvamento
    {
    private:
        std::ostringstream buffer;
        nlohmann::json json;
    public:
        Gerenciador_Salvamento();
        ~Gerenciador_Salvamento();

        void salvar(std::string caminho);
        void ler(std::string caminho);
        std::ostringstream* getBuffer() { return &buffer; }
    };
}