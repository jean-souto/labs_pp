/*42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7%
de imposto sobre o salário-base.*/
#include <stdio.h>
int main () {
    float salb, salf, salci;
    printf ("Digite o valor do salario base: ");
    scanf ("%f", &salb);
    salci = (salb * 0.93);
    salf = salci + (salb * 0.05);
    printf ("O salario final sera de %.2f.", salf);

    return 0;
}