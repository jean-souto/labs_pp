/*6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos.*/
#include <stdio.h>

int conversao (int h, int min, int s);

int main ()
{
    int h, min, s, final;

    printf ("Digite as horas, minutos e segundos: ");
    scanf ("%d %d %d", &h, &min, &s);

    printf ("O total em segundos eh de %ds", conversao (h, min, s));

    return 0;
}

int conversao (int h, int min, int s)
{
    int soma = 0;

    soma += h*3600;
    soma += min*60;
    soma += s;

    return soma;
}