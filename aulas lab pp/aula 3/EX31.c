/*31. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostra qual a classificação dessa pessoa.*/
#include <stdio.h>
int main ()
{
    float peso, h;

    printf ("Digite sua altura em cm: ");
    scanf ("%f", &h);
    h = h/100;

    printf ("Digite seu peso em kg: ");
    scanf ("%f", &peso);

    if (h < 1.20)
    {
        if (peso < 60)
        {
            printf ("Voce esta no grupo A.");
        }
        else
        {
            if (peso >= 60 && peso <= 90)
            {
                printf ("Voce esta no grupo D.");
            }
            else
            {
                if (peso > 90)
                {
                    printf ("Voce esta no grupo G.");
                }
            }
        }
    }
    else
    {
        if (h >= 1.20 && h <= 1.70)
        {
            if (peso < 60)
            {
                printf ("Voce esta no grupo B.");
            }
            else
            {
                if (peso >= 60 && peso <= 90)
                {
                    printf ("Voce esta no grupo E.");
                }
                else
                {
                    if (peso > 90)
                    {
                        printf ("Voce esta no grupo H.");
                    }
                }
            }
        }
        else
        {
            if (h > 1.70)
            {
                if (peso < 60)
                {
                    printf ("Voce esta no grupo C.");
                }
                else
                {
                    if (peso >= 60 && peso <= 90)
                    {
                        printf ("Voce esta no grupo F.");
                    }
                    else
                    {
                        if (peso > 90)
                        {
                            printf ("Voce esta no grupo I.");
                        }
                    }
                }
            }
        }
    }

    return 0;
}