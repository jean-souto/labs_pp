/*4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 O número digitado ao quadrado
 A raiz quadrada do número digitado*/
#include <stdio.h>
#include <math.h>
int main ()
{
    float nun;
    
    printf ("Digite um numero: \n");
    scanf ("%f", &nun);

    if (nun >= 0) {
        printf ("A raiz quadrada do numero eh %.0f e ele ao quadrado eh %.0f.", sqrt(nun), pow (nun, 2));
    }else{ 
        printf ("O numero eh invalido,");
    }

    return 0;
}