/*16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.*/
#include <stdio.h>
int main () 
{
    int A;

    printf ("Digite um numero de 1 a 12: ");
    scanf ("%d", &A);

    switch ( A )
    {
        case 1 :
        printf ("Janeiro\n");
        break;

        case 2 :
        printf ("Fevereiro\n");
        break;

        case 3 :
        printf ("Março\n");
        break;

        case 4 :
        printf ("Abril\n");
        break;

        case 5 :
        printf ("Maio\n");
        break;
    
        case 6 :
        printf ("Junho\n");
        break;

        case 7 :
        printf ("Julho\n");
        break;

        case 8 :
        printf ("Agosto\n");
        break;

        case 9 :
        printf ("Setembro\n");
        break;

        case 10 :
        printf ("Outubro\n");
        break;

        case 11 :
        printf ("Novembro\n");
        break;

        case 12 :
        printf ("Dezembro\n");
        break;

        default :
        printf ("VALOR INVALIDO!");
        break;
    }

    return 0;
}