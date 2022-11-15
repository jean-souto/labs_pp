/*5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/

#include <stdio.h>
int main ()
{
    int soma = 0, b, a;

    for (a = 1; a <= 10; a++)
    {
        printf ("Digite um numero: \n");
        scanf ("%d", &b);

        soma += b;

    }

    printf ("A soma dos numeros eh: %d", soma);

    return 0;
}