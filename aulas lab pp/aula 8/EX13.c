/*13. Faça um programa que gerencie o estoque de um mercado e:
 Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome (máximo 15
letras), preço e quantidade;
 Leia um pedido, composto por um código de produto e a quantidade. Localize este
código no vetor e, se houver quantidade suficiente para atender ao pedido
integralmente, atualize o estoque e informe o usuário. Repita este processo até ler um
código igual a zero.
Se por algum motivo não for possível atender ao pedido, mostre uma mensagem
informando qual erro ocorreu.*/
#include <stdio.h>

typedef struct 
{
    char nome[15];
    int codigo, quant;
    float preco;
}produto;

typedef struct 
{
    int codigo, quant;
}order;

int main ()
{
    produto estoque[5];
    order pedido;
    int i, controle = 0;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite os dados do produto (nome, codigo, quantidade e valor):\n");
        setbuf (stdin, NULL);
        fgets (estoque[i].nome, 15, stdin);
        scanf ("%d%d%f", &estoque[i].codigo, &estoque[i].quant, &estoque[i].preco);
    }

    pedido.codigo = 1; //faz o do-while funcionar

    do 
    {
        printf ("\nDigite o pedido (codigo e quantidade): ");
        scanf ("%d%d", &pedido.codigo, &pedido.quant);

        for (i = 0; i < 5; i++)
        {
            if (pedido.codigo == estoque[i].codigo)
            {
                if (estoque[i].quant < pedido.quant)
                {
                    printf ("\nQuantidade insuficiente do produto no estoque.");
                }
                else
                {
                    printf ("\nPedido realizado com sucesso!");
                    estoque[i].quant -= pedido.quant;
                }
            }
            else
            {
                controle++;
            }
        }

        if (controle > 4) //avisa caso o codigo informado no pedido seja invalido
        {
            printf ("\nCodigo de produto invalido");
        }

    }while(pedido.codigo != 0);

    printf ("\nObrigado!");

    return 0;
}