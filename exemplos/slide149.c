#include <stdio.h>


struct cadastro
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};
/*

struct cadastro c[4];

int main()
{
	for(int i=0; i<4; i++)
	{
		printf("nome: ");
		scanf("%s", c[i].nome);

		printf("idade: ");
		scanf("%d", &c[i].idade);

		printf("rua: ");
		scanf("%s", c[i].rua);
		
		printf("numero: ");
		scanf("%d", &c[i].numero);
		
		printf("%s Pessoa nome: %s,idade: %d anos, rua: %s, numero: %d \n", c[i], c[i].nome, c[i].idade, c[i].rua, c[i].numero);	
	}
	return 0;
}
*/

typedef struct
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;

}alunos;

int main()
{
	alunos aluno1;
	printf("nome: ");
	scanf("%s", aluno1.nome);

	printf("idade: ");
	scanf("%d", &aluno1.idade);

	printf("rua: ");
	scanf("%s", aluno1.rua);
		
	printf("numero: ");
	scanf("%d", &aluno1.numero);
		
	printf("nome: %s ,idade: %d anos ,rua: %s ,numero: %d \n",  aluno1.nome, aluno1.idade, aluno1.rua, aluno1.numero);	
	
	return 0;
}