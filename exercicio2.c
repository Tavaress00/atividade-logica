#include <stdio.h>

struct dados_livro

{
    char nome[200];
    char autor[200];
    char categoria[200];
    float preco;
};

int main() {
   
   struct dados_livro livro[3];
   
   int i;

   for ( i = 0; i < 3; i++)
   {
    printf("Nome do livro: ");
    gets(livro[i].nome);

    fflush(stdin);

    printf("Autor Do Livro: ");
    gets(livro[i].autor);

    fflush(stdin);

    printf("Categoria do livro: ");
    gets(livro[i].categoria);

    fflush(stdin);

    printf("Preco: ");
    scanf("%f", &livro[i].preco);

    fflush(stdin);
   }
   
   fflush(stdin);

for ( i = 0; i < 3; i++)
{
    printf("nome: %s \n", livro[i].nome);
    printf("autor: %s \n", livro[i].autor);
    printf("categoria: %s \n", livro[i].categoria);
    printf("preco: %f \n", livro[i].preco);
}


    return 0;
}