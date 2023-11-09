#include <stdio.h>
#include <stdlib.h>

int main(){

int numero[5];
int i;
int maiorNumero = 0;
int menorNumero = 9999;

system("cls");

printf("Digite 5 Numeros : \n");
for ( i = 0; i < 5; i++)
{
    printf("Numeros %d: ", i +1);
    scanf("%d", &numero[i]);
 
    maiorNumero = numero[i] > maiorNumero ? numero[i] : maiorNumero;
    menorNumero = numero[i] > menorNumero ? numero[i] : menorNumero;

}

system("cls");

for ( i = 0; i < 5; i++)
{
    printf("Numero: %d \n", numero[i]);
}

   printf("r numero: %d \n\n", maiorNumero);
   printf("menor numero: %d \n\n", menorNumero);

    return 0;
}