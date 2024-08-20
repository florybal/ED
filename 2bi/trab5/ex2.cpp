/*
Modifique a classe Livro do exercício anterior para incluir um construtor que inicialize os atributos titulo,
autor e anoPublicacao ao criar um objeto.
2. Adicione um destrutor à classe Livro que exiba uma mensagem indicando que o objeto está sendo
destruído.

*/
#include <iostream>


class Livro
{
public:
    std::string titulo;
    std::string autor;
    int anoPublicacao;
    
public:
    
    Livro(std::string titulo, std::string autor, int anoPublicacao)
    {
        this->titulo        = titulo;
        this->autor         = autor;
        this->anoPublicacao = anoPublicacao;
    }

    ~Livro(){
        std::cout<<"objeto desconstruido " << std::endl;
    }

    void detalhes(std::string titulo, std::string autor, int anoPublicacao)
    { 
        std::cout<< "titulo: " << this->titulo        <<std::endl; 
        std::cout<< "autor: "  << this->autor         <<std::endl; 
        std::cout<< "ano: "    << this->anoPublicacao <<std::endl;
    }
};

int main()
{
    Livro livro(std::string titulo, std::string autor, int anoPublicacao);

    
    return 0;
}