/*28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:*/
#include <stdio.h>
#include <math.h>
int main ()
{
    float a, b, c;
    int p1, p2, p3;
    char var;

    printf ("Digite tres numeros: \n");
    scanf ("%f%f%f", &a, &b, &c);

    printf ("Digite qual a media desejada (1, 2, 3 ou 4): \n1. Geometrica \n2. Ponderada \n3. Harmonica \n4. Aritmetica \n");
    scanf (" %c", &var);

    switch (var)
    {
        case '1' :
            printf ("Voce escolheu media geometrica. O resultado eh: %.1f.", cbrt(a*b*c));
        break;

        case '2' : 
            printf ("Voce escolheu a media ponderada. Digite, respectivamente, os pesos de cada valor: \n");
            scanf ("%d%d%d", &p1, &p2, &p3);
            printf ("A media ponderada eh %.1f.", (a+b+c)/(p1+p2+p3));
        break;

        case '3' :
            printf ("Voce escolheu media harmonica. O resultado eh %.1f.", (1/((1/a)+(1/b)+(1/c))));
        break;

        case '4' :
            printf ("Voce escolheu media aritmetica. O resultado eh %.1f.", (a+b+c)/3);
        break;

        default : 
            printf ("Nao foi digitado um valor valido.");
        break;
    }

    return 0;
}