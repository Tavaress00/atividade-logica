include <stdio.h>
#include <stdlib.h>

float valor_metros(float numero)
{
    
    return numero * 100;
}
    int main() {
    
    float numero;
    float centimentros;

    printf("Digite um numero: ");
    scanf("%f", &numero);
   
    centimentros = valor_metros(numero);

    printf("Valor em centimetros: %f \n", centimentros);  

        return 0;
    }

      
    
