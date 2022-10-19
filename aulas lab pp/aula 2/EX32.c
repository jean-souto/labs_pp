/*32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro.*/
#include <stdio.h>
int main () {
    int nun, soma;
    printf ("Digite um numero inteiro; \n");
    scanf ("%d", &nun);
    soma = ((nun*3)+1) + ((nun*2)-1);
    printf ("O resultado eh %d.", soma);
    return 0;
}