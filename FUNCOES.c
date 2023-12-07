#include <stdio.h>
#include <stdlib.h>

void cabecalho() {
   
   printf("\n===================================\n");
   printf("\tSenai");
   printf("\n===================================\n");
}

void limpaTeta() {

    fflush(stdin);
    system("cls");
}

void mostrarIdade(int idade) {
  
  printf("Idade: %d \n", idade);
}

int main() {

    char nome[200];
    int idade;

    cabecalho();

    printf("DIgite seu nome: ");
    gets(nome);
    limpaTeta();

    cabecalho();
    printf("Digite sua Idade: ");
    scanf("%d",&idade);
    limpaTeta();

    cabecalho();
    printf("Nome: %s \n", nome);

    mostrarIdade();

    printf("Idade: %d \n", idade);

}