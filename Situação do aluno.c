#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i;
    int nota;
    int contadorNota = 0;
    float media;
    float soma;
  do
  {
    printf("\nDigite notas entre 1 e 10!!");
    
    for ( i = 1; i <= 5; i++)
    {
        printf("\nInforme sua %d nota: ", i);
        scanf("%d", &nota); 

        contadorNota++;
        soma += nota;
        media = soma / contadorNota;      
    } 
 
    

    if ( media >= 7)
    {
        printf("APROVADO!!");
    }
    else
    {
        printf("REPROVADO!!");
    }
     
     printf("\nmedia do aluno: %f \n", media);
    



  }while ( nota <= 0 || nota >= 10);


    

  
  return 0;
}