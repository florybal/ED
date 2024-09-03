/*
Implemente duas funções com o mesmo nome incrementar, uma que recebe um inteiro por valor e outra
que recebe um inteiro por referência. Ambas devem incrementar o valor do inteiro em 1. No programa
principal, declare uma variável, chame as duas funções e observe as diferenças nos resultados. Explique o
que aconteceu.
*/

#include <iostream>

int incrementar(int &a){ return a+1; }

int incrementar(int &a){ return a+1; }

int main()
{
    int x=20;

    std::cout<<incrementar(x)<<std::endl;
    std::cout<<incrementar(x)<<std::endl;

    //não compila pois as duas funções possuem o mesmo nome

    return 0;
}