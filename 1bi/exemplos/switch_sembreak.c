#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    switch(num)
    {
        case 0:
            printf("0");
        case 1:
            printf("1");
        case 2:
            printf("2");
        case 3:
            printf("3");
        case 4:
            printf("4");
    }

    return 0;
}