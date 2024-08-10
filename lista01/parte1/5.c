/*Escreva um programa que use a estrutura de repetição while. Esse programa deve pedir que o
usuário digite um número inteiro repetidamente até o mesmo digitar o número zero.*/

#include <stdio.h>

int main()
{
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);

    while(num != 0)
    {
        printf("digite um numero: ");
        scanf("%d", &num);
    }
    printf("Programa acabou!");
    return 0;
}