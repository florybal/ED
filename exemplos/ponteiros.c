#include <stdio.h>

int main()
{

    int x = 10;
    int *p;

    p = &x; 
    printf("%p %p \n", p, &x);
    printf("%d %d", *p, *p);

    return 0;
}