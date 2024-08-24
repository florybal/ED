/*
Exercício 6: Composição
1. Crie uma classe chamada Endereco com os seguintes atributos:
• nome (string);
• cidade (string);
• cep (string).
Inclua métodos para definir e exibir os detalhes do endereço.
2. Crie uma classe chamada Pessoa com os seguintes atributos:
• nome (string);
• idade (int);
• Um objeto da classe Endereco.
Inclua métodos para definir e exibir os detalhes da pessoa, incluindo seu endereço.
3. No método main, crie um objeto da classe Pessoa, defina seus atributos (incluindo o endereço); e exiba
os detalhes completos
*/

#include <iostream>

class Endereco
{
public:
    void setDados(const std::string &nome, const std::string &cidade, const int &cep)
    {
        this->cep = cep;
        this->cidade = cidade;
        this->nome = nome;
    }
    void exibir() const
    {
        std::cout<<"Rua: " <<nome<<std::endl;
        std::cout<<"cidade: "<<cidade<<std::endl;
        std::cout<<"cep: " <<cep<<std::endl;
    }

private:
    std::string nome;
    std::string cidade;
    int cep;
};

class Pessoa
{
public:
    void setDados(const std::string nome, const int idade, const Endereco &endereco) 
    {
        this->nome = nome;
        this->idade = idade;
        this->endereco = endereco;
    }
    void exibirDados() const
    {
        std::cout<<"Nome: " <<nome <<"Idade: " <<idade<<std::endl;
        endereco.exibir();
    }

private:
    Endereco endereco;
    std::string nome;
    int idade;
};

int main()
{   
    Endereco endereco;
    endereco.setDados("D", "Sao Paulo", 202130);

    Pessoa pessoa;
    pessoa.setDados("Maria", 20, endereco);

    pessoa.exibirDados();

    return 0;
}