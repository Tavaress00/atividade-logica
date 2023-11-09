#include <stdio.h>
#include <stdlib.h>

int main(){

int i;
int tamanho[3];
float soma = 0;
float media;
float notas[tamanho];

for ( i = 0; i < tamanho; i++)
{
printf("Digite a %d nota: ", i + 1);
scanf("%f",&notas[i]);

 soma += notas[i];
}

media = soma / tamanho;

printf("\nMostrando notas. \n");

for ( i = 0; i < tamanho; i++)
{
    printf("%d nota: %.1f \n", i + 1, notas[i]);
}

printf("Media: %.1f \n", media);

return 0;
}
