/*
Crie uma função chamada calcularMedia que receba três números reais (float ou double) por valor e
retorne a média desses números. No programa principal, leia três números do usuário, chame a função e
exiba a média.
*/

#include <iostream>


float calcularMedia(float &a, float &b, float &c)
{
    return (a+b+c)/3;
}

int main()
{
    float x=0,y=0,z=0;
    std::cin>>x>>y>>z;

    std::cout<<calcularMedia(x, y, z)<<std::endl;
    return 0;
}