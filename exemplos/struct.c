#include <stdio.h>
#include <string.h>

typedef struct{
    int idade;
    char nome[50];
    float peso;

    
}Pessoa;

int main()
{
    Pessoa pessoa;

    Pessoa *p= &pessoa;
    pessoa.idade = 15;
    strcpy(pessoa.nome, "pedro gay");
    pessoa.peso = 405.5f;

    printf("idade: %d, nome: %s, peso: %f quilos \n", pessoa.idade, pessoa.nome, pessoa.peso);
    return 0;
}