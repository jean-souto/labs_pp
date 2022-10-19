/*43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3% sem juros;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).*/
#include <stdio.h>
int main () {
    float valor, valor1, valor2, comi1, comi2;
    printf ("Digite o valor do produto: \n");
    scanf ("%f", &valor);
    valor1 = valor * 0.9;
    valor2 = valor/3;
    comi1 = valor1 * 0.05;
    comi2 = valor*0.05;
    printf ("O valor a vista eh de %.2f. A prazo eh de %.2f. A comissao a vista eh de %.2f. A comissao a prazo eh de %.2f.", valor1, valor2, comi1, comi2);

    return 0;
}