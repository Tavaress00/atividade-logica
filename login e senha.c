#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   //declarando variaveis
   char loginSalvo[250] = "rodrigo";
   char senhaSalva[250] = "senai123";
   char login[250];
   char senha[250];

   //solicitando variaveis

   do
   {
   printf("informe seu login: ");
   gets(login);

   printf("informe sua senha: ");
   gets(senha);

   //strcmp
   if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0) {
       printf("bem vindo");
   }else {
    printf("Acesso invalido");
   }
    
 }while (strcmp(login, loginSalvo)  != 0 || strcmp(senha, senhaSalva) != 0;
    

    return 0;
}