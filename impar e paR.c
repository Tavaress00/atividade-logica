#include <stdio.h>
#include <stdlib.h>

int pares_numeros(int numeros[])
{    
    int resultado;
    int i;
    int pares = 0;

    for ( i = 0; i < 6; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
        
    }
 return pares;   
}

int impares_numeros(int numeros[])
{
    int resultado;
    int i;
    int impares = 0;

    for ( i = 0; i < 6; i++)
    {
        if (numeros[i] % 2 != 0)
        {
            impares++;
        }
        
    }
    return impares;
}

int main() {

int i;
int numeros[6];
int pares = 0;
int impares = 0;


for ( i = 0; i < 6; i++)
{
    printf("%d numero: ", i + 1);
    scanf("%d", &numeros[i]);
 }

    system("cls");
    printf("Exibindo Resultados: \n");

    pares = pares_numeros(numeros);
    impares = impares_numeros(numeros);

    printf("\nQuantidade Pares: %d \n", pares);
    printf("\nqunatodade Impares: %d \n", impares);

    return 0;
}