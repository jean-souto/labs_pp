/*15. Faça um programa para armazenar um livro de receitas e:
 Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de
ingredientes e ingredientes;
 Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o vetor
de ingredientes, sendo que cada ingrediente contém nome e quantidade;
 Procure receita por nome, mostrando seus ingredientes se encontrar. Se não encontrar,
informe ao usuário. Repita o processo até digitar uma string vazia.*/
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char nome[25];
    char quant[10];
}ingrediente;

typedef struct 
{
    char nome[25];
    int quant_ingredientes;
    ingrediente ingredientes[20];
}receita;

int main ()
{
    int n, i, j, controle = 0;
    char busca[25];
    receita livro[5];

    for (i = 0; i < 5; i++)
    {
        printf ("Digite o nome da receita: ");
        setbuf (stdin, NULL);
        fgets (livro[i].nome, 25, stdin);

        printf ("Digite a quantidade de ingredientes da receita: ");
        scanf ("%d", &livro[i].quant_ingredientes);

        n = livro[i].quant_ingredientes;

        for (j = 0; j < n; j++)
        {
            printf ("Digite os ingredientes e quantidades: ");
            setbuf (stdin, NULL);
            fgets (livro[i].ingredientes[j].nome, 25, stdin);
            setbuf (stdin, NULL);
            fgets (livro[i].ingredientes[j].quant, 10, stdin);
        }
    }

    do 
    {
        printf ("Digite a receita para busca: ");
        setbuf (stdin, NULL);
        fgets (busca, 25, stdin);

        controle = 0;

        for (i = 0; i < 5; i++)
        {
            if (strcmp (busca, livro[i].nome) == 0)
            {
                printf ("\nReceite encontrada!\n");
                fputs (livro[i].nome, stdout);

                n = livro[i].quant_ingredientes;

                for (j = 0; j < n; j++)
                {
                    fputs (livro[i].ingredientes[j].nome, stdout);
                    fputs (livro[i].ingredientes[j].quant, stdout);
                    printf ("\n");
                }
            }
            else
            {
                controle++;
            }
        }

        if (controle > 4)
        {
            printf ("\nReceita nao encontrada\n");
        }
    }while(strcmp (busca, "") != 0);
    
    printf ("Obrigado!");

    return 0;
}