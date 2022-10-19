/*47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.*/
#include <stdio.h>
int main () {
    int nun, d1, d2, d3;
    printf ("Digite um numero inteiro de 4 digitos: \n");
    scanf ("%d", &nun);
    d1 = nun/1000;
    nun = nun%1000;
    d2 = nun/100;
    nun = nun%100;
    d3 = nun/10;
    nun = nun%10;
    printf (" %d \n %d \n %d \n %d", d1, d2, d3, nun);

    return 0;
}