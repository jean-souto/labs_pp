/*11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
“Número inválido”*/
#include <stdio.h>
#include <math.h>
int main ()
{
    int nun, n1, n2, n3;
    
    printf ("Digite um numero inteiro de ate 4 digitos: \n");
    scanf ("%d", &nun);

    if (nun > 0) {

        n1 = nun/1000; nun = nun%1000;
        n2 = nun/100; nun = nun%100;
        n3 = nun/10; nun = nun%10;

        printf ("A soma dos algarismos eh %d.", (n1 + n2 + n3 + nun));

    }else
    {
        printf ("Numero invalido!");
    }

    return 0;
}