/*40. Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.
*/
#include <stdio.h>
#define DIA 30
int main () {
    float dias, liqui;
    printf ("Quantos dias o encanador trabalhou? ");
    scanf ("%f", &dias);
    liqui = ((dias * DIA) * 0.92);
    printf ("O salario liquido sera de %.2f.", liqui);



    return 0;
}