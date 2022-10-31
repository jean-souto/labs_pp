/*5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    int nun;
    
    printf ("Digite um numero: \n");
    scanf ("%d", &nun);

    if (nun % 2 == 0) {
        printf ("O numero eh par.");
    }else{
        printf ("O numero eh impar.");
    }

    return 0;
}