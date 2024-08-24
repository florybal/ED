/*
Exercício 4: Herança
1. Crie uma classe base chamada Funcionario com os seguintes atributos:
• nome (string)
• salario (double)
Inclua métodos para definir e exibir esses atributos.
2. Crie uma classe derivada chamada Gerente que herda de Funcionario e inclua um atributo adicional
bonus (double). Inclua um método para calcular o salário total (salário + bônus) e exibi-lo.
3. No método main, crie objetos das classes Funcionario e Gerente, defina seus atributos e exiba os
detalhes
*/

#include <iostream>
#include <string>

class Funcionario
{
public:


    void setDados(std::string nome, double salario)
    { 
        this->nome = nome; 
        this->salario = salario; 
    }
    void exibir() const
    {
        std::cout<<"nome: " <<nome<<std::endl;
        std::cout<<"salario: " << salario<<std::endl;
    }

protected:
    std::string nome;
    double salario;
};

class Gerente : Funcionario
{   
public:
    void setDados(std::string nome, double salario, double bonus)
    {
        Funcionario::setDados(nome, salario);
        this->bonus = bonus;
    }
    void salarioTotal() const { 
        double salarioTotal = salario+bonus;
        Funcionario::exibir();
        std::cout<<"Salario total: "<<salarioTotal<<std::endl;
    }

private:
    double bonus;
};

int main()
{
    Funcionario funcionario1;
    Gerente gerente;

    funcionario1.setDados("joao", 1420.40);
    funcionario1.exibir();

    gerente.setDados("Maria", 3000.0, 500.0);
    gerente.salarioTotal();
    return 0;
}