#include <stdio.h>
#include <stdlib.h>

int main(){
 
  //solicitando variaveis

  float nome[250];
  int idade;
  float primeiraNota;
  float segundaNota;
  float terceiraNota;
  float media;

  //solicitando dados

  printf("Informe seu nome: ");
  scanf("%f",&nome);

  fflush(stdin); // Limpa o cache de input.

  printf("Informe sua idade: ");
  scanf("%d", &idade);

  fflush(stdin); // Limpa o cache de input.

  printf("Informe sua primeira nota: ");
  scanf("%f",&primeiraNota);

  fflush(stdin); // Limpa o cache de input.

  printf("Informe sua segunda nota: ");
  scanf("%f",&segundaNota);

  fflush(stdin); // Limpa o cache de input.

  printf("Informe sua terceira nota: ");
  scanf("%f",&terceiraNota);

  //calculando media

  media = (primeiraNota + segundaNota + terceiraNota) /3;

  //exibindo resultados 

if (media >= 7)
{
    printf("aprovado!");
} 
else
{
    printf("reprovado!");
}

  printf("nome: %f \n\n", nome);
  printf("idade: %d \n\n", idade);
  printf("primeira nota: %.1f \n\n", primeiraNota);
  printf("segunda nota: %.1f \n\n", segundaNota);
  printf("terceira nota: %.1f \n\n", terceiraNota);
  printf("media: %.1f \n\n", media);

  return 0;
}
















