/*18. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
ano anterior. Faça programa que determine o salário atual do funcionário.*/
#include <stdio.h>
int main ()
{
    int ano; 
    double salario = 2000, aumento;

    aumento = salario*0.015;
    salario = salario+aumento;

    for (ano = 1998; ano <= 2022; ano++)
    {
        aumento = aumento*2;
        salario = salario+aumento;
    }

    printf ("O salario em 2022 eh de: R$%.2lf", salario);

    return 0;
}