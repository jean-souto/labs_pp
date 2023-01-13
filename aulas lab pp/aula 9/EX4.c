/*4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2
variáveis e troque o seu conteúdo, i.e., esta função é chamada passando duas variáveis A e
B, por exemplo, e após a execução da função, A conterá o valor de B e B terá o valor de A.*/

#include <stdio.h>

int troca (int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main ()
{
    int a, b;

    printf ("Digite dois valores: ");
    scanf ("%d%d", &a, &b);
     
    troca (&a, &b);

    printf ("A: %d, B: %d", a, b);

    return 0;
}