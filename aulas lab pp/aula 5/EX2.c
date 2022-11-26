/*2. Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no
formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.*/
#include <stdio.h>

void mes (int a, int b, int c);

int main ()
{
    int a, b, c;

    printf ("Digite o dia, mes e ano (dd mm aaaa): ");
    scanf ("%d%d%d", &a, &b, &c);

    mes (a, b, c);
}

void mes (int a, int b, int c)
{

    switch (b)
    {
        case 1:
        printf ("%d de janeiro de %d", a, c);
        break;

        case 2:
        printf ("%d de fevereiro de %d", a, c);
        break;

        case 3:
        printf ("%d de março de %d", a, c);
        break;

        case 4 :
        printf ("%d de abril de %d", a, c);
        break;

        case 5 :
        printf ("%d de maio de %d", a, c);
        break;

        case 6:
        printf ("%d de junho de %d", a, c);
        break;

        case 7:
        printf ("%d de julho de %d", a, c);
        break;

        case 8:
        printf ("%d de agosto de %d", a, c);
        break;

        case 9:
        printf ("%d de setembro de %d", a, c);
        break;

        case 10:
        printf ("%d de outubro de %d", a, c);
        break;

        case 11:
        printf ("%d de novembro de %d", a, c);
        break;

        case 12 :
        printf ("%d de dezembro de %d", a, c);
        break;

        default:
        printf ("mes invalido");
        break;

    }
}