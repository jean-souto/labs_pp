/*10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
 Homens: (72,7 * h) – 58,0
 Mulheres: (62,1 * h) – 44,7*/
#include <stdio.h>
#include <math.h>
int main ()
{
    float altura;
    char sexo;

    printf ("Digite sua altura EM CENTIMETROS: \n");
    scanf ("%f", &altura); 
    
    altura = altura/100;

    printf ("Digite seu sexo (F ou M): ");
    scanf (" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        printf ("Seu peso ideal eh %.2f.", (72.7 * altura)-58.0);
    }
    else {
        if (sexo == 'F' || sexo == 'f') {
            printf ("Seu peso ideal eh %.2f.", (62.1 * altura)-44.7);
        }
        else {
            printf ("Sexo invalido.");
        }
    }

    return 0;
}