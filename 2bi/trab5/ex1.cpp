/*
1. Crie uma classe chamada Livro com os seguintes atributos:
• titulo (string)
• autor (string)
• anoPublicacao (int)
Inclua métodos para:
• Definir os valores desses atributos.
• Exibir os detalhes do livro.
2. No método main, crie um objeto da classe Livro, defina seus atributos e exiba seus detalhes.
*/

#include <iostream>

class Livro
{
public:
    std::string titulo;
    std::string autor;
    int anoPublicacao;
    
public:
    
    Livro(){}
    ~Livro(){}

    void detalhes(std::string titulo, std::string autor, int anoPublicacao)
    { 
        std::cout<< "titulo: " << this->titulo        <<std::endl; 
        std::cout<< "autor: "  << this->autor         <<std::endl; 
        std::cout<< "ano: "    << this->anoPublicacao <<std::endl;
    }
};


int main()
{
    Livro livro1;
    livro1.titulo = "Cerebo"; 
    livro1.autor  = "Pedro";
    livro1.anoPublicacao = 2030;
      
    livro1.detalhes(livro1.titulo, livro1.autor, livro1.anoPublicacao);

    return 0;
}