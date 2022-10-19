/*37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%.*/
#include <stdio.h>
int main () {
    float prod, pcdes;
    printf ("Digite o valor do produto: \n");
    scanf ("%f", &prod);
    pcdes = prod * 0.88;
    printf ("O valor do produto com desconto eh de %.2f reais.", pcdes);

    return 0;
}