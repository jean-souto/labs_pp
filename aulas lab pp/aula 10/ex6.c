/*12. Considere um cadastro de produtos de um estoque, com as seguintes informações para cada
produto:
 Código de identificação do produto: representado por um valor inteiro
 Nome do produto: com até 50 caracteres
 Quantidade disponível no estoque: representado por um número inteiro
 Preço de venda: representado por um valor real
a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para
guardar as informações de um produto;
b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário) e peca ao usuário
para entrar com as informações de cada produto;
c) Encontre o produto com o maior preço de venda;
d) Encontre o produto com a maior quantidade disponível no estoque.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int codigo;
    char nome[50];
    int quant;
    float valor;
}produto;

int main ()
{
    produto *estoque;
    float maiorpreco = 0;
    int x, i, maiorquant = 0, maiorquanti = 0, maiorprecoi = 0;

    printf ("Digite o tamanho do estoque: ");
    scanf ("%d", &x);

    estoque = (produto*) calloc (x, sizeof(produto));

    for (i = 0; i < x; i++)
    {
        printf ("Digite o nome do produto: ");
        setbuf (stdin, NULL);
        fgets (&estoque[i].nome, 50, stdin);

        printf ("\nDigite o codigo: ");
        scanf ("%d", &estoque[i].codigo);

        printf ("\nDigite o valor: ");
        scanf ("%f", &estoque[i].valor);

        printf ("\nDigite a quantidade: ");
        scanf ("%d", &estoque[i].quant);
    }

    for (i = 0; i < x; i++)
    {
        if (estoque[i].quant > maiorquant)
        {
            maiorquant = estoque[i].quant;
            maiorquanti = i;
        }

        if (estoque[i].valor > maiorpreco)
        {
            maiorpreco = estoque[i].valor;
            maiorprecoi = i;
        }
    }

    printf ("\nO maior preco eh o produto %s.\n", estoque[maiorprecoi].nome);
    printf ("O produto em maior quantidade eh %s", estoque[maiorquanti].nome);

    return 0;
}