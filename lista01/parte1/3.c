/*- Escreva um programa que use a estrutura condicional if / else. Peça para o usuário informar um
inteiro e, então, imprima se o número digitado é nulo, positivo ou negativo. Imprima, também, se o
número é par ou ímpar (use o operador % para obter o resto da divisão).
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if(num >= 0){
        if(num > 0)
            printf("positivo \n");
        else
            printf("nulo \n");
    }else{
        printf("negativo \n");
    }
    
    if(num % 2== 0)
        printf("eh par \n");
    else
        printf("eh impar \n");
    return 0;
}