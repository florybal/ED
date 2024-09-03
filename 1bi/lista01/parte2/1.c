/*- Escreva um programa que crie um struct ponto com coordenadas x, y (valores reais). Peça para o
usuário informar quanto vale cada coordenada e atribua os valores informados aos respectivos campos
da struct.*/

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

    printf("valores de x: %d\n valores de y: %d \n", p.x, p.y);

    return 0;
}