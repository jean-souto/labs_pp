/*19. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de
um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com
a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.*/
#include <stdio.h>
int main ()
{
    float valor = 0;
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0,nota2 = 0, nota1 = 0;

    printf ("Digite o valor do saque: ");
    scanf ("%f", &valor);
    
    do
    {
        valor -= 100;
        nota100++;
    }while (valor >= 100);

    while (valor >= 50)
    {
        ++nota50;
        valor -= 50;
    }

    while (valor >= 20)
    {
        ++nota20;
        valor -= 20;
    }
    
    while (valor >= 10)
    {
        ++nota10;
        valor -= 10;
    }

    while (valor >= 5)
    {
        ++nota5;
        valor -= 5;
    }

    while (valor >= 2)
    {
        ++nota2;
        valor -= 2;
    }

    while (valor >= 1)
    {
        ++nota1;
        valor -= 1;
    }

    printf ("%d notas de cem\n%d notas de cinquenta\n%d notas de vinte\n%d notas de dez\n%d notas de cinco\n%d notas de dois\n%d notas de um", nota100, nota50, nota20, nota10, nota5, nota2, nota1);

    return 0;
}