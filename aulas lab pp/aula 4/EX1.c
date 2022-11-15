/*1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0.*/

#include <stdio.h>
int main () 
{
    int nun, tres;

    for (tres = 1; tres < 6; tres++)
    {
        nun = tres*3;
        printf ("%d, ", nun);
    }
    
    return 0;
}