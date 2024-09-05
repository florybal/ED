/*
Exercício 8: Classes Abstratas e Interfaces
1. Crie uma classe abstrata Funcionario com o método virtual puro calcularSalario().
2. Crie duas classes derivadas Engenheiro e Vendedor, que implementam calcularSalario() de forma difer-
ente (por exemplo, Engenheiro tem salário fixo e Vendedor tem salário base + comissão).
3. No método main, crie um array de ponteiros para Funcionario, armazene objetos de Engenheiro e
Vendedor; e chame calcularSalario() para cada um.
*/

#include <iostream>

class Funcionario
{
public:
    virtual double calcularSalario() const = 0;
};

class Engenheiro : public Funcionario
{
public:
    Engenheiro(double salario) : salario(salario) {}
    double calcularSalario() const override
    {
        return salario;
    }
private:
    double salario;
};

class Vendendor : public Funcionario
{
public:
    Vendendor(double salario, double comissao) : salario(salario), comissao(comissao) {} 
    double calcularSalario() const override
    {
        return salario+comissao;
    }   
private:
    double salario;
    double comissao;
};

int main()
{
    Engenheiro e(1540);
    Vendendor v(1300.00,200.00);
    Funcionario* funcionario[2];

    funcionario[0] = &e;
    funcionario[1] = &v;

    for(int i=0; i<2; i++)
    {
        std::cout<<"Salario: " <<funcionario[i]->calcularSalario()<<std::endl;
    }
    return 0;
}