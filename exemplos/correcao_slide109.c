#include <stdio.h>

int main()
{
    int a, b;
    printf("digite o valor de a: ");
    scanf("%d", &a);


    printf("digite o valor de b: ");
    scanf("%d", &b);

    while(a < b)
    {
        printf("%d \n", a);
        a += 1;
    }
    return 0;
}