/*19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas, não simultaneamente pelos dois.*/
#include <stdio.h>
int main () 
{
    int nun, div3, div5;
    
    printf ("Digite um numero: ");
    scanf ("%d", &nun);

    div3 = nun%3;
    div5 = nun%5;

    if ((div3 == 0) && (div5 == 0)) 
    {
        printf ("O numero eh divisivel por 3 e 5.");
    }
    else
    {
        if (div3 == 0)
        {
            printf ("O numero eh divisivel por 3.");
        }
        else
        {
            if (div5 == 0)
            {
                printf ("O numero eh divisivel por 5.");
            }
            else
            {
                printf ("O numero nao eh divisivel nem por 3 e nem por 5.");
            }
        }
    }

    return 0; 
}