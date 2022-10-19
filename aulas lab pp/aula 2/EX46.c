/*46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere
outro número formado pelos dígitos invertidos do número lido.*/
#include <stdio.h>
int main () {
    int nun, div1, div2;
    printf ("Digite um numero de tres digitos inteiro: \n");
    scanf ("%d", &nun);
    div1 = (nun/100);
    nun = nun%100;
    div2 = (nun/10);
    nun = nun%10;
    printf ("%d %d %d", nun, div2, div1);


    return 0;
}