#include <stdio.h>

struct dados_pessoa
{
    char nome[200];
    int idade;
    char endereco[200];

};

int main() {

struct dados_pessoa pessoa;

printf("=== Solicitando Dados ao Usuario ===\n");
printf("\nnome: ");
gets(pessoa.nome);

printf("\nIdade: ");
scanf("%d", &pessoa.idade);

fflush(stdin);

printf("\nEndereco: ");
gets(pessoa.endereco);

printf("\n=== Exibindo Dados ===\n");

printf("\nnome: %s \n", pessoa.nome);
printf("idade: %d \n", pessoa.idade);
printf("endereco: %s", pessoa.endereco);


    return 0;
}