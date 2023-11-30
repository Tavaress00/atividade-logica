#include <stdio.h>

struct dados_usuario
{
    char nome[200];
    int nascimento;
    char rg[200];
    char cpf[200];
};

int main() {

struct dados_usuario usuario[5]; 

int i;

for ( i = 0; i < 5; i++)
{
    printf("Nome: ");
    gets(usuario[i].nome);

    printf("Ano de nascimento: ");
    scanf("%d", &usuario[i].nascimento);

    printf("RG: ");
    scanf("%s",&usuario[i].rg);

    printf("CPF: ");
    scanf("%s",&usuario[i].cpf);
    fflush(stdin);
}

system("cls");

printf("\n=== Exibindo Dados ===\n");

for ( i = 0; i < 5; i++)
{
    printf("\nnome: %s \n", usuario[i].nome);
    printf("\nData Nascimento: %d \n", usuario[i].nascimento);
    printf("\nRG: %s \n", usuario[i].rg);
    printf("\nCPF: %s \n", usuario[i].cpf);
}



return 0;
}