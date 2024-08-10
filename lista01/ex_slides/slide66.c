#include <stdio.h>

int main()
{
    int num;
    printf("digite um numero: %d", num);
    scanf("%d", &num);

    if(num >30 && num < 60)
        printf("o aluno deve fazer recuperacao");

    system("pause");
    return 0;
}