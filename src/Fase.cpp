#include "../Estados/Fases/Fase.h"

#include <fstream>
#include <string>
#include <iostream>

#define ARQUIVO_JOGADOR "jogador.json"
#define ARQUIVO_INIMIGO "inimigo.json"
#define ARQUIVO_THREAD "thread.json"

namespace Estados
{
    namespace Fases
    {
        Fase::Fase(int i):
        jogadores(),
        obstaculos(),
        inimigos(),
        Estado(i),
        gC(),
        buffer(),
        IThread(NULL)
        {
            gC.set_inimigos(&inimigos);
            gC.set_jogadores(&jogadores);
            gC.set_obstaculos(&obstaculos);
            gC.set_IThread(&IThread);
            criarJogadores();
            criarInimigos();
        }
        Fase::~Fase()
        {
            salvar();
            IThread->kill();
            if(IThread)
                delete IThread;
        }

        void Fase::gerenciar_colisoes()
        {
            gC.colisao_simples();
        }
        void Fase::criarJogadores()
        {
            std::ifstream arquivo(ARQUIVO_JOGADOR);
            if (!arquivo)
            {
                std::cout << "Arquivo não existe" << std::endl;   
                exit(2);
            }

            nlohmann::json json = nlohmann::json::parse(arquivo);

            for (auto it = json.begin(); it != json.end(); ++it)
            {
                jogadores.incluir(static_cast<Entidades::Entidade*>(new Entidades::Personagens::Jogador(
                    sf::Vector2f(
                        (float) ((*it)["posicao"][0]), 
                        (float) ((*it)["posicao"][1])
                                ),
                    sf::Vector2f(
                        (float) ((*it)["velocidade"][0]),
                        (float) ((*it)["velocidade"][1])
                                )
                    )));
            }
            
        }
        void Fase::criarInimigos()
        {
            std::ifstream arquivo(ARQUIVO_INIMIGO);
            if (!arquivo)
            {
                std::cout << "Arquivo não existe" << std::endl;   
                exit(2);
            }

            nlohmann::json json = nlohmann::json::parse(arquivo);

            for (auto it = json.begin(); it != json.end(); ++it)
            {
                inimigos.incluir(static_cast<Entidades::Entidade*>(new Entidades::Personagens::Inim_Facil(
                    sf::Vector2f(
                        (float) ((*it)["posicao"][0]), 
                        (float) ((*it)["posicao"][1])
                                ),
                    sf::Vector2f(
                        (float) ((*it)["velocidade"][0]),
                        (float) ((*it)["velocidade"][1])
                                )
                    )));
            }
            arquivo.close();
            arquivo.open(ARQUIVO_THREAD);
            json = nlohmann::json::parse(arquivo);
            auto it = json.begin();
            IThread = new Inim_Facil_Thread( sf::Vector2f(
                        (float) ((*it)["posicao"][0]), 
                        (float) ((*it)["posicao"][1])
                                ),
                    sf::Vector2f(
                        (float) ((*it)["velocidade"][0]),
                        (float) ((*it)["velocidade"][1])
                                ));
            arquivo.close();
        }
        void Fase::criarCenario(std::string caminho)
        {
            std::ifstream arquivo(caminho);
            if (!arquivo)
            {
                std::cout<<"Não foi possível acessar o arquivo de cenário."<<std::endl;
                exit(1);
            }
            std::string linha;
            
            Entidades::Entidade* aux = nullptr;

            int j = 0;
            for (int i = 0; std::getline(arquivo, linha); i++)
            {
                j = 0;
                for (char tipo : linha)
                {
                    switch (tipo)
                    {
                        // Plataforma:
                    case '0':
                        aux = static_cast<Entidades::Entidade*> (new Entidades::Obstaculos::Obst_Facil(sf::Vector2f(j * TAM, i * TAM)));
                        if (aux)
                            obstaculos.incluir(aux);
                        break;
                    default:
                        break;
                    }
                    j++;
                }
            }
            arquivo.close();
        }
        void Fase::salvar()
        {
            // Salvando Jogadores:
            std::ofstream arquivo(ARQUIVO_JOGADOR);  
            if (!arquivo)
            {
                std::cout << "Problema em salvar o arquivo" << std::endl;
                exit(1);
            }

            Listas::Lista<Entidades::Entidade>::Iterador j = jogadores.get_primeiro();
            buffer.str("");
            buffer << "[";
            if (j != nullptr)
            {
                (*j)->salvar(&buffer);
                j++;
            }
            while (j != nullptr)
            {
                buffer << ",";
                (*j)->salvar(&buffer);
                j++;
            }
            buffer << "]";

            arquivo << buffer.str();

            arquivo.close();
            // Salvando inimigos: 

            std::ofstream arquivo_inimigo(ARQUIVO_INIMIGO);  
            if (!arquivo_inimigo)
            {
                std::cout << "Problema em salvar o arquivo" << std::endl;
                exit(1);
            }

            Listas::Lista<Entidades::Entidade>::Iterador i = inimigos.get_primeiro();
            buffer.str("");
            buffer << "[";
            if (i != nullptr)
            {
                (*i)->salvar(&buffer);
                i++;
            }
            while (i != nullptr)
            {
                buffer << ",";
                (*i)->salvar(&buffer);
                i++;
            }
            buffer << "]";

//INIMIGO THREAD SALVANDO
            IThread->salvar();
//--------------------------------------
            arquivo_inimigo << buffer.str();

            arquivo_inimigo.close();
        }
    }
}
