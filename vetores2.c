#include <stdio.h>
#include <stdlib.h>

int main(){

int i;
float nota[3];
int tamanho = 200;

for ( i = 0; i < tamanho; i++)
{
    printf("digite a %d nota: ", i+1);
    scanf("%f",&nota[i]);
}

for ( i = 0; i < tamanho; i++)
{
    printf("%d nota: %.1f \n",i+1, nota[i]);
}


return 0;
}