#include <stdio.h>
#include <stdlib.h>

float preco_produto(float valorProduto){

    float resultado;
    int desconto;
    if (valorProduto < 100)
    {
        desconto = 0.1;
        resultado = valorProduto * 1.1;
    }else if (valorProduto >= 100)
    {
        desconto = 0.20;
        resultado = valorProduto * 1.2;
    }

    return resultado;

   
}

int main() {

float valorProduto;
float desconto;


printf("Informe o valor da compra: ");
scanf("%f", &valorProduto);

valorProduto = preco_produto(valorProduto);

printf("valor: %.2f \n", valorProduto);

    return 0;
}