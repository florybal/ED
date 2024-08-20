/*
Crie uma classe chamada ContaBancaria com os seguintes atributos privados:
• numeroConta (int)
• saldo (double)
Inclua métodos públicos para:
• Depósito de dinheiro na conta.
• Saque de dinheiro da conta (verifique se o saldo é suficiente).
• Consulta do saldo atual.
2. No método main, crie um objeto da classe ContaBancaria, realize depósitos e saques; e exiba o saldo
final.
*/

#include <iostream>

class contaBancaria
{
private:
    int numeroConta = 0;
    double saldo    = 0;

public:
    void deposito(int valor) { saldo +=valor; }
    void saque(int valor) 
    { 
        if(saldo > 0)
            saldo -= valor;
    }
    void consulta() { std::cout<<saldo<< std::endl;}
};

int main()
{   
    contaBancaria conta1;
    contaBancaria conta2;
    
    conta1.deposito(200);
    conta2.deposito(300);

    conta1.saque(50);
    conta2.saque(250);

    conta1.consulta();
    conta2.consulta();


    return 0;
}