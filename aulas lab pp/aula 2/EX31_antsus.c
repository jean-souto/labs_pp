/*31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/
#include <stdio.h> 
int main () {
    int nun, ant, sus;
    printf ("Digite um numero inteiro: \n");
    scanf ("%d", &nun);
    ant = nun-1; sus = nun+1;
    printf ("O antecessor e o sucessor sao, respectivamente, %d e %d.", ant, sus);

    return 0;
}