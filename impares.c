#include <stdio.h>
#include <stdlib.h>

int main(){

int numeros[6];
int i;
int pares = 0;
int impares = 0;

for ( i = 0; i < 6; i++)
{
    printf("Digite um numero: ");
    scanf("%d", &numeros[i]);

    numeros[i] % 2 == 0 ? pares++ : impares++;
 }

system("cls");
    printf("Exibindo Resultados: \n");

    for ( i = 0; i < 6; i++)
    {
        printf("Numero: %d \n", numeros[i]);
    }
    
    printf("\nquantidade pares: %d \n\n", pares++);
    printf("\nquantidades impares: %d \n\n", impares++);

    return 0;
}