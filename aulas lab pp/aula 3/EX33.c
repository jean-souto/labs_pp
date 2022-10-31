/*33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule
e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a
segunda tabela).*/
#include <stdio.h>
int main ()
{
    float pinicio, pfinal;

    printf ("Digite o preco do produto p/ correcao: ");
    scanf ("%f", &pinicio);

    // correcao de preco

    if (pinicio < 50) // if 1
    {
        pfinal = pinicio*1.05;
        printf ("O preco corrigido eh de %.2f.", pfinal);
    }
    else // else 1
    {
        if (pinicio >= 50 && pinicio <= 100) // if 2
        {
            pfinal = pinicio*1.10;
            printf ("O preco corrigido eh de %.2f.", pfinal);
        }
        else // else 2
        {
            pfinal = pinicio*1.15;
            printf ("O preco corrigido eh de %.2f.", pfinal);
        }
    }

    // amostragem do valor (barato, caro, etc)

    if (pfinal < 80) // if 1.2
    {
        printf (" Barato!");
    }
    else // else 1.2
    {
        if (pfinal >= 80 && pfinal <= 120) // if 2.2
        {
            printf (" Normal!");
        }
        else // else 2.2
        {
            if (pfinal > 120 && pfinal <= 200) // if 3.2
            {
                printf (" Caro!");
            }
            else // else 3.2
            {
                printf (" Muito caro!");
            }
        }
    }

    return 0;
}