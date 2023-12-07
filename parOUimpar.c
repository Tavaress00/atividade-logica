#include <stdio.h>
#include <stdlib.h>

void par_impar(int numero) {
if (numero % 2 == 0)
{
    printf("Par");
}    
else
{
    printf("impar");
}

}

int main() {
 
 int numero;

 printf("Digite um numero: ");
 scanf("%d", &numero);

par_impar(numero);



return 0;
}

