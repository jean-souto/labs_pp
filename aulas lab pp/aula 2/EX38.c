/*38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
recebeu um aumento de 25%.*/
#include <stdio.h>
int main () {
    float sal, nsal;
    printf ("Digite o valor do salario atual: \n");
    scanf ("%f", &sal);
    nsal = sal * 1.25;
    printf ("O valor do novo salario sera de %.2f reais.", nsal);

    return 0;
}