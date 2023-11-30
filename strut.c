#include <stdio.h>

struct dados_aluno
{
    char nome[200];
    int idade;
    float peso;
    float altura;
    char endereco;
};

int main() {

   struct dados_aluno aluno;

  printf("\nSolicitando os dados dos alunos... \n");
  printf("nome do aluno: ");
  gets(aluno.nome);

  printf("Idade do Aluno: ");
  scanf("%d", &aluno.idade);

  printf("Peso do Aluno: ");
  scanf("%f", &aluno.peso);

 printf("Altura do Aluno: ");
 scanf("%f", &aluno.altura);

 printf("endereco: ");
 gets(aluno.endereco\n);

  printf("Exibindo Dados do Aluno...\n");
  printf("Nome: %s\n", aluno.nome);
  printf("idade: %d \n", aluno.idade);
  printf("Peso: %.2f \n", aluno.peso);
  printf("Altura: %.2f \n", aluno.altura);

    return 0;
}