/*23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for
divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992,
1996.*/
#include <stdio.h>
int main () 
{ 
    int ano, div4, div100, div400;
    
    printf ("Digite um ano: \n");
    scanf ("%d", &ano);
    
    div4 = ano % 4;
    div100 = ano % 100;
    div400 = ano % 400;
    
    if (div4 == 0) 
    {
        if (div100 == 0) 
        {
            if (div400 == 0) 
            {
                printf ("Esse ano foi/sera bissexto");
            }
            else
            {
                printf ("Esse nao eh um ano bissexto");
            }
        }
        else
        {
            printf ("Esse ano foi/sera bissexto");
        }
    }
    else
    {
        printf ("Esse nao eh um ano bissexto");
    }

    return 0;
}