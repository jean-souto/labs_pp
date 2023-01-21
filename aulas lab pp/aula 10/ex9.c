/*18. Escreva um programa para fazer a alocação dinâmica dos blocos de dados conforme
solicitado abaixo:
a) Vetor de 1024 Bytes (1 Kbyte);
b) Matriz de inteiros de dimensão 10 × 10;
c) Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres), código
do produto (inteiro) e preço em reais;
d) Texto de até 100 linhas com até 80 caracteres em cada linha.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int codigo;
    float preco;
    char nome[30];
}registro;

int main ()
{
    int option;
    void *p;
    int **vet, i;
    char **str;
    registro *produtos;

    printf ("Digite a opcao desejada: \n1. Vetor de 1024 Bytes (1 Kbyte)\n2. Matriz de inteiros de dimensao 10 × 10\n3. Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres), codigo do produto (inteiro) e preco em reais\n4. Texto de ate 100 linhas com ate 80 caracteres em cada linha\n");
    scanf ("%d", &option);

    switch (option)
    {
    case 1:
        p = (void*) malloc (1024);
        printf ("\nkbyte criado com sucesso");
        break;

    case 2: 
        vet = (int**) calloc (10, sizeof(int*));
        for (i = 0; i < 10; i++)
        {
            vet[i] = (int*) calloc(10, sizeof(int));
        }
        printf ("\nmatriz criada com sucesso");
        break;
    
    case 3:
        produtos = (registro*) calloc (50, sizeof(registro));
        printf ("\nregistro criado com sucesso");
        break;

    case 4:
        str = (char**) calloc (100, sizeof(char*));
        for (i = 0; i < 100; i++)
        {
            str[i] = (char*) calloc (80, sizeof(char));
        }
        printf ("\nvetor de string criado com sucesso");
        break;
    }

    if (option == 4)
    {
        for (i = 0; i < 100; i++)
        {
            free(str[i]);
        }
        free (str);
    }

    if (option == 2)
    {
        for (i = 0; i < 10; i++)
        {
            free(vet[i]);
        }
        free (vet);
    }
    return 0;
}