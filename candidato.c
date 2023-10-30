#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
  setlocale(LC_ALL,"portuguese");

   char nome[200];
   char sexo[200];
   float nascimento;
   int idade;

   printf("informe seu nome: ");
   scanf("%s",&nome);

   printf("informe seu sexo: ");
   scanf("%s",&sexo);

   printf("informe o ano do seu nascimento: ");
   scanf("%f",&nascimento);

   idade = 2023 - nascimento;
  
  system("cls");
  if ( idade >= 18 )
  {
    printf("nome do candidato: %s \n", nome);
    printf("sexo do candidato: %s \n", sexo);
    printf("idade do candidato: %d \n", idade);
  }
  else
  {
    printf("NÃO É POSSÍVEL REALIZAR O CADASTRO, O(a) CANDIDATO(a) DEVE TER 18 ANOS OU MAIS!!");
  }
  
    return 0;
}