#include <stdio.h>

int main()
{
    int i;
    do{
        printf("escolha: ");

        printf("(1) \n");
        printf("(2) \n");
        printf("(3) \n");
        scanf("%d", &i);
    }while((i< 1) || (i >3));

    return 0;
}