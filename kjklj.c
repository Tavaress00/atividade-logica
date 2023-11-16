#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

  int j;
  int quantidade = 5;
  int numero[quantidade];
  int contadorPar = 0;
  int contadorImpar = 0;
  int contador = 0;
  int maiorNumero;
  int menorNumero = 9999;
  float media;
  int soma = 0;
  int contadorNegativo = 0;
  int contadorPositivo = 0;
  float mediaImpar;
  float mediaPar;
  int somaImpar = 0;
  int somaPar = 0;

  system("cls");

  for ( j = 0; j < quantidade; j++)
  {
    printf("Informe o %dº numero: ", j + 1);
    scanf("%d", &numero[j]);

      maiorNumero = numero[j] > maiorNumero ? numero[j] : maiorNumero;
      menorNumero = numero[j] < menorNumero ? numero[j] : menorNumero;

     if (numero[j] % 2 == 0)
     {
        contadorPar++;
        somaPar += numero[j];
        mediaPar = somaPar / contadorPar;
     }
     else
     {
        contadorImpar++;
        somaImpar += numero[j];
        mediaImpar = somaImpar / contadorImpar;
     }
     
    if (numero[j] > 0)
    {
        contadorPositivo++;
    }
    else
    {
        contadorNegativo++;
    }
    
    contador++;
    soma += numero[j];
    media = soma / 5;

  }

  
  system("cls");

   printf("\nQuantidades de números ímpares: %d \n", contadorImpar++);
   printf("\nQuantidades de números pares: %d \n", contadorPar++);
   printf("\nQuantidade de números inseridos: %d \n", contador);
   printf("\nMaior número: %d \n", maiorNumero);
   printf("\nMenor número: %d \n", menorNumero);
   printf("\nsoma: %d \n", soma);
   printf("\nmedia: %f \n", media);
   printf("\nQuantidade números negativos: %d \n", contadorNegativo);
   printf("\nQuantidade números positivos: %d \n", contadorPositivo);
   printf("\nMedia par: %f \n", mediaPar);
   printf("\nMedia impar: %f \n", mediaImpar); 

    for ( j = --quantidade; j >= 0; j--)
  {
    printf("%d\n\n", numero[j]);
  }   

   
    return 0;
}