#include <stdio.h>
#include <stdlib.h>

int main(){
   
   int i;
   int numero;
   int contadorPar = 0;
   int contadorImpar = 0;

   for ( i = 1; i <= 5; i++)
   {
    printf("Digite o %d numero: ", i);
    scanf("%d", &numero);

    if ( numero % 2 == 0)
    {
        contadorPar++;
    }
    else
    {
        contadorImpar++;
    }
    
   }

   printf("\nQuantidade de Numeros pares: %d \n", contadorPar++);
   printf("\nQuantidade de Numeros Impares: %d \n", contadorImpar++);
   
 
   return 0;
}