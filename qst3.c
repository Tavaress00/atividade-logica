#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int i, j;
char nome[2][200];
int telefone[200];
int opcao;

do
{

      printf("nome: ");
      gets(nome[i]);
    
      printf("N�mero de telefone: ");
      scanf("%d", &telefone[j]);

    printf(" digite 1 - para Adicionar | 2 - para mostrar cadastro: ");
    scanf("%d", &opcao);   
    
     
 fflush(stdin);

} while (opcao == 1);

switch (opcao)
    {
    case 2:
        printf("Nome Para contato: %s \n", i+1, nome[i]);
        printf("N�mero Para Contato: %d \n", j+1, telefone[j]);
        break;
    
    default :
    printf("Op��o escolhida est� inval�da!!!");
        break;
    }

return 0;
}