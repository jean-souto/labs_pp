/*1. Faça um programa que receba dois números e mostre qual deles é o maior.*/
#include <stdio.h>
int main () 
{
    int A, B;
    printf ("Digite dois numeros: \n");
    scanf ("%d %d", &A, &B);
    if (A > B) { 
        printf ("%d eh maior!", A); 
    }else{
        printf ("%d eh maior!", B);
    }

    return 0;
}