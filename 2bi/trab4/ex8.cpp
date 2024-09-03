/*
Escreva uma função chamada exibirDados que receba por valor um número inteiro, por referência uma
variável do tipo double, e por referência constante uma string. A função deve simplesmente exibir os valores
passados. No programa principal, declare as variáveis, leia os valores do usuário, chame a função e exiba os
resultados.
*/

#include <iostream>
#include <string>

void exbirDados(int &num, double &num2, std::string &str) { 
    std::cout<< num << num2 << str <<std::endl;

}

int main()
{
    int    num=0;
    double num2=0;
    std::string nome;

    std::cin>>num>>num2;

    std::getline(std::cin, nome);

    exbirDados(num, num2, nome);

    return 0;
}