#include <stdio.h>
#include <stdlib.h>

int main(){

float nota;
int i;
float soma;
int contadorNota = 0;
float media;

for ( i = 1; i <= 4; i++)
{
    printf("Informe sua %d nota: ", i);
    scanf("%f",&nota);

   contadorNota++;
   soma += nota;
   media = soma / contadorNota; 
}

printf("Media do aluno: %f \n\n", media);
printf("soma das notas: %f \n\n", soma);


    return 0;
}