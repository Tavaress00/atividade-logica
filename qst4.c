#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int i;
int numero[5];
int contadorPositivos = 0;
int contadorNegativos = 0;
int pares = 0;
int impares = 0;
float somaNumero = 0;
float media;
float somaPares = 0;
float mediaPares;
int maiorNumero = 0;
int menorNumero = 9999;


for (i = 0; i < 5; i++){
    printf ("\nInforme o %d� n�mero: ", i+1);
    scanf ("%d", &numero[i]);
    somaNumero += numero[i];

    if (numero[i] % 2 == 0){
        somaPares += numero[i];
        pares++;

    }else{
        impares++;
    }

    if (numero[i] > 0){
        contadorPositivos++;
    }else{
        contadorNegativos++;
    }

    maiorNumero = numero[i] < maiorNumero ? maiorNumero : numero [i];
    menorNumero = numero[i] > menorNumero ? menorNumero : numero [i];
}

mediaPares = somaPares / pares;
media = somaNumero / i;

    printf ("\nQuantidade de n�meros pares: %d", pares);
    printf ("\nQuantidade de n�meros impares: %d", impares);
    printf ("\nMédia dos n�meros pares: %.2f", mediaPares);
    printf ("\n\nQuantidade de n�meros positivos: %d", contadorPositivos);
    printf ("\nQuantidade de n�meros negativos: %d", contadorNegativos);
    printf ("\nMedia dos n�meros: %.2f", media);
    printf ("\n\nMaior n�mero: %d", maiorNumero);
    printf ("\nMenor n�mero: %d", menorNumero); 


return 0;
}