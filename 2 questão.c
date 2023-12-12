#include <stdio.h>

struct dados_Aluno {

    char nome[200];
    char dataNascimento[22];
    float n1;
    float n2;
    float media = 0;
};

float calcularMedia(float n1, float n2) {
    int resultado;
    resultado = (n1 + n2) / 2; 
    return resultado;

}


int main() {

  struct dados_aluno aluno[5];
    
    int i;
    int j;
    

    for ( i = 0; i < 5; i++)
    {
        printf("nome: ");
        gets(alunos[i].nome);

        printf("Data Nascimento: ");
        gets(alunos[i].dataNascimeto);

        for (j = 0; j < 2; j++)
        {
            printf("%d Nota ", j + 1);
            scanf("%f", &alunos[i].notas);
        }
        
    }
    


    return 0;
}