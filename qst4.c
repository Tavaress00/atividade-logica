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
    printf ("\nInforme o %dº número: ", i+1);
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

    printf ("\nQuantidade de números pares: %d", pares);
    printf ("\nQuantidade de números impares: %d", impares);
    printf ("\nMÃ©dia dos números pares: %.2f", mediaPares);
    printf ("\n\nQuantidade de números positivos: %d", contadorPositivos);
    printf ("\nQuantidade de números negativos: %d", contadorNegativos);
    printf ("\nMedia dos números: %.2f", media);
    printf ("\n\nMaior número: %d", maiorNumero);
    printf ("\nMenor número: %d", menorNumero); 


return 0;
}