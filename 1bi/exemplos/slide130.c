#include <stdio.h>

int main()
{
    int a, b;
    printf("a: ");
    scanf("%d ", &a);

    printf("b: ");
    scanf("%d ", &b);

    while(a <= b)
    {
        a += 1;
        if(a == 5)
            continue;
        
        printf("%d \n", a);
    }

    return 0;    
}