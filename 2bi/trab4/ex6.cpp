/*
Implemente uma função chamada maiorValor que receba dois inteiros por referência e retorne por referência o maior 
valor entre eles. Escreva um programa que leia dois números, chame a função e use o valor retornado para alterar o
valor da variável maior no programa principal. Utilize o seguinte protótipo para a função int& maiorValor(int &a, int &b)
e empregue int &maior = maiorValor(num1, num2); para chamar a função.
*/

#include <iostream>

int& maiorValor(int &a, int &b)
{
    return a ? a>b : b;
}


int main()
{
    int num1=0, num2=0;
    int maior=0;
    std::cin>>num1>>num2;

    int &maior = maiorValor(num1, num2);

    std::cout<<maior<<std::endl;
    return 0;
}