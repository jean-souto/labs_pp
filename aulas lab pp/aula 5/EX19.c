/*19. Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!.*/
#include <stdio.h>

int fatn (int n);

int main ()
{
    int nun;

    printf ("Digite o numero para calcular !n: ");
    scanf ("%d", &nun);

    printf ("O fatorial de n eh: %d", fatn (nun));

    return 0;
}

int fatn (int n)
{
    int fat;

    if (n == 0 || n == 1)
    {
        return fat = 1;
    }
    else
    {   
        return fat = n * fatn(n-1);
    }

}