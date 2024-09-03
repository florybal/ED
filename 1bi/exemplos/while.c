#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int prod = 1;
    int i    = 0;

    while(i < n)
    {
        int v;
        printf("Valores para v: \n");
        scanf("%d", &v);
        prod = prod * v;
        i = i + 1;
    }    
    printf("%d", prod);

    return 0;
}