/*
Implemente uma função chamada imprimirConst que receba um inteiro por referência constante (const)
e simplesmente exiba o valor do número. Escreva um programa que leia um número do usuário, chame a
função e exiba o valor. Verifique se é possível tentar modificar o valor dentro da função e explique o motivo
do comportamento observado.
*/

#include <iostream>

void imprimirConst(const int &a)
{
    std::cout<<a<<std::endl;

    a = 30;
}


int main()
{
    int x = 0;
    std::cin>>x;

    imprimirConst(x);

    return 0;
}