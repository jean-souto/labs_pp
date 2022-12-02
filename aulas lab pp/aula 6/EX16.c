/*8. Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um
menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes*/
#include <stdio.h>
#include <string.h>

int main ()
{
    int matriz1[2][2], matriz2[2][2], matrizRES[2][2]; //matrizes
    int i, j, constante; // indices e constantes
    char option, str[10] = "sim"; // constante do switch e string do final

    for (i = 0; i < 2; i++) // primeira atribuição de valores para as matrizes
    {
        for (j = 0; j < 2; j++)
        {
            printf ("Digite um numero para a matriz 1: ");
            scanf ("%d", &matriz1[i][j]);

            printf ("Digite um numero para a matriz 2: ");
            scanf ("%d", &matriz2[i][j]);
        }
    }

    printf ("\nESCOLHA UMA OPCAO: \na) somar as matrizes \nb) subtrair a primeira pela segunda \nc)adicionar uma constante \nd) imprimir as matrizes\n");
    scanf (" %c", &option); // atribuição da escolha do usuario acerda da opção desejada

    switch (option) //switch que engloba as 4 opções
    {
        case 'a' :
        case 'A' : //soma

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    matrizRES[i][j] = matriz1[i][j] + matriz2[i][j];
                }
            }

        break;
    
        case 'b' :
        case 'B' : //subtração

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    matrizRES[i][j] = matriz1[i][j] - matriz2[i][j];
                }
            }

        break;

        case 'c' :
        case 'C' : //soma de constante

            printf ("Digite a constante: ");
            scanf ("%d", &constante);

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    matriz1[i][j] = matriz1[i][j] + constante;
                    matriz2[i][j] = matriz2[i][j] + constante;
                }
            }

        break;

        case 'd' :
        case 'D' : //impressão 

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    printf ("  %d  ", matriz1[i][j]);
                }
                printf ("\n");
            }

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    printf ("  %d  ", matriz2[i][j]);
                }
                printf ("\n");
            }

        break;

        default : 
            printf ("opcao invalida");
        break;
    }

    if (option == 'a' || option == 'A' || option == 'b' || option == 'B' || option == 'c' || option =='C') //ADICIONAL: questionamento ? imprimir ou nao o resultado de A B ou C
    {
        printf ("Quer imprimir o resultado? \nSim ou nao?\n");
        setbuf (stdin, NULL); // limpa buffer
        gets (str); //coleta resposta p/ string 

        if (((strcmp(str, "sim") == 0) || (strcmp(str, "Sim") == 0)) && (option == 'a' || option == 'A' || option == 'b' || option == 'B')) //strcmp compara string com string, se igual retorna 0; nesse caso ha o if para A e B
        {
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    printf ("  %d  ", matrizRES[i][j]);
                }
                printf ("\n");
            }
        }
        else if (((strcmp(str, "sim") == 0) || (strcmp(str, "Sim") == 0)) && (option == 'c' || option =='C')) // if para o C
        {
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    printf ("  %d  ", matriz1[i][j]);
                }
                printf ("\n");
            }

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    printf ("  %d  ", matriz2[i][j]);
                }
                printf ("\n");
            }
        }
    }
        
    printf ("\nObrigado"); // finalização do programa com educação :D 

    return 0;
}