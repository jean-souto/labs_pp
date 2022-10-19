/*41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor
calculado.*/
#include <stdio.h>
int main () {
    float vhr, nhr, sal;
    printf ("Digite o numero de horas trabalhadas e o valor da hora: \n");
    scanf ("%f %f", &nhr, &vhr);
    sal = ((nhr * vhr) * 1.1);
    printf ("O salario sera de %.2f.", sal);

    return 0;
}