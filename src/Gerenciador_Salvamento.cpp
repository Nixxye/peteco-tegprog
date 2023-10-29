#include "../Gerenciadores/Gerenciador_Salvamento.h"

namespace Gerenciadores
{
    Gerenciador_Salvamento::Gerenciador_Salvamento():
    json(),
    buffer()
    {

    }
    Gerenciador_Salvamento::~Gerenciador_Salvamento()
    {
        
    }
    void Gerenciador_Salvamento::salvar(std::string caminho)
    {
        std::ofstream arquivo(caminho);
        if (!arquivo)
        {
            std::cout << "Problema em salvar o arquivo" << std::endl;
            exit(1);
        }

        arquivo << buffer.str();

        arquivo.close();
    }
    void Gerenciador_Salvamento::ler(std::string caminho)
    {
        std::ifstream arquivo(caminho);
        if (!arquivo)
        {
            std::cout << "Arquivo não existe" << std::endl;   
            exit(2);
        }

        json = nlohmann::json::parse(arquivo);
    }
}