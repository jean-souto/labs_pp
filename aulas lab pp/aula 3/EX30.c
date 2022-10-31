/*30. Faça um programa que receba três números e mostre-os em ordem decrescente.*/
#include <stdio.h> 
int main () 
{
    int a1, b2, c3;
    
    printf ("Digite tres numeros: \n");
    scanf ("%d%d%d", &a1, &b2, &c3);
    
    if (a1 >= b2 && b2 >= c3) 
    { 
        printf ("%d %d %d", a1, b2, c3);
    }
    else
    {
        if (a1 >= c3 && c3 >= b2) 
        {
            printf ("%d %d %d", a1, c3, b2);
        }
        else
        {
            if (b2 >= c3 && c3 >= a1) 
            {
                printf ("%d %d %d", b2, c3, a1);
            }
            else
            {
                if (b2 >= a1 && a1 >= c3) 
                {
                    printf ("%d %d %d", b2, a1, c3);
                }
                else
                {
                    if (c3 >= a1 && a1 >= b2) 
                    {
                        printf ("%d %d %d", c3, a1, b2);
                    }
                    else
                    {
                        if (c3 >= b2 && b2 >= a1) 
                        {
                            printf ("%d %d %d", c3, b2, a1);
                        }
                    }
                }
            }
        }
    }
  
    return 0;

}