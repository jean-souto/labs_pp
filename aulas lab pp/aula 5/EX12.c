/*12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de
todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1).*/

#include <stdio.h>

int soma (int nun);

int main ()
{
    int nun, somanun; 

    printf ("Digite um numero de ate 4 algarismos: ");
    scanf ("%d", &nun);

    somanun = soma (nun);

    if (somanun > 0)
    {
        printf ("A soma dos algarismos eh %d", somanun);
    }
    else
    {
        printf ("Numero invalido");
    }

    return 0;
}

int soma (int nun)
{
    int nun1, nun2, nun3, nun4, soma;

    nun1 = nun/1000;
    nun -= nun1*1000;
    
    nun2 = nun/100;
    nun -= nun2*100;

    nun3 = nun/10;
    nun -= nun3*10;

    nun4 = nun;

    return soma = nun1+nun2+nun3+nun4; 
}