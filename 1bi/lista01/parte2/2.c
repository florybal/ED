/* Escreva um programa que use o struct criado no problema anterior. Pergunte ao usuário as
coordenadas e, então, calcule em qual quadrante o ponto está.*/

#include <stdio.h>

typedef struct
{
    int x;
    int y;
}Ponto;

int main()
{
    Ponto p;
    printf("digite valores para x e y: ");
    scanf("%d %d", &p.x, &p.y);

    if((p.x && p.y)>0)
        printf("ta no 1 quadrante");
    else
        printf("ta no 3 quadrante");
    if(p.x <0 && p.y > 0)
        printf("ta no 2 quadrante");
    if(p.x >0 && p.y < 0)
        printf("ta no 4 quadrante");
    return 0;
}