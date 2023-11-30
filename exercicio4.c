#include <stdio.h>

struct dados_aluno
{
    char nome[200];
    int idade;
    float notas[2];
    
};

int main()
{

    struct dados_aluno aluno[3];

    int i;
    int j;
    float soma = 0;
    float media[3];

    for (i = 0; i < 3; i++)
    {
        printf("Nome: ");
        gets(aluno[i].nome);

        printf("Idade: ");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("%d nota: ", j + 1);
            scanf("%f", &aluno[i].notas[j]);
            soma += aluno[i].notas[j]; 
        }
        fflush(stdin);
        media[j] = soma/j;
        soma = 0;
    }

    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("Nome: %s \n", aluno[i].nome);
        printf("idade: %d\n", aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("%d nota: %.2f \n", j + 1, aluno[i].notas[j]);
        }
    }

printf("media: %.2f \n", media[j]);

    return 0;
}