#include <stdio.h>
#include <stdlib.h>

int main(){

int vetor[5];
int i;
float nota[3];

for ( i = 0; i < 3; i++)
{
    printf("digite a %d nota: ", i+1);
    scanf("%f",&nota[i]);
}

for ( i = 0; i < 3; i++)
{
    printf("%d nota: %.1f \n",i+1, nota[i]);
}


return 0;
}