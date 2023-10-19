#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Arquivo do comando para escrever o codigo com "ACENTOS"...

int main(){
    setlocale(LC_ALL,"portuguese");

// solicitando variaveis
int i;
int par = 0;
int impar = 0;
int numero;

// solicitando numeros

for ( i = 1; i <= 5; i++){
     
  printf("Digite o %d numero: ", i);
   scanf("%d",&numero);   

}
  if (numero %2 == 0)
  {
    par++;
  }
  else
  {
    // outra forma numero % 2 == 0 ? par++ : impar++
    impar++;
  }
  

printf("impar: %d \n", impar++);
printf("par: %d \n", par++);

return 0;

}    
