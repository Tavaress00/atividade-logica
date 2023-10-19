#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Arquivo do comando para escrever o codigo com "ACENTOS"...

int main(){
    setlocale(LC_ALL,"portuguese");

int opcao;
int mulheres5K = 0;
int idade;
int maiorIdade;
int menorIdade = 999;
float salario;
float somaSalario = 0;
float mediaSalarial;
int contadorSalario++;
char sexo;

do
{
    printf("=== Pesquisa de habitantes === \n\n");
    printf("\nDigite uma das opções abaixo: \n");
    printf("1 - adicionar pessoa \n");
    printf("2 - sair e exibir resultado \n");
    printf("informe a opção desejada: ");
    scanf("%c",&opcao);

    switch (opcao)
    {
    case 1:
     printf("\n Digite sua idade: \n");
     scanf("%d",&idade;

     printf("Informe seu sexo - M ou F: ");
     scanf("%c", &sexo);

     printf("informe seu salario: \n");
     scanf("%f", &salario);
    
    contadorSalario++;
    somaSalario += salario;
    maiorIdade = maiorIdade > idade ? maiorIdade : idade; 
    menorIdade = menorIdade > idade ? menorIdade : idade;
    break;
    case 2: 
    mediaSalarial = somaSalario / contadorSalario;
      printf("maior idade: %d \n", maiorIdade);
       printf("menor idade: %d \n", menorIdade);
      printf("quantidade de mulheres que ganham mais de 5K: %d \n", mulheres5K);
      printf("media salarial: %.2f \n", mediaSalarial);
    break;
    default: printf("opção invalida!");
        break;
    }

} while (opcao != 2);



 return 0;
}
