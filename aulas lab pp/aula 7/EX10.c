/*10. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/
#include <stdio.h>

int main ()
{
    int valor, desc, vista;
    char merc [50];

    printf ("Digite o nome e o valor da mercadoria: ");
    fgets (merc, 50, stdin);
    scanf ("%d", &valor);

    desc = valor*0.1;
    vista = valor*0.9;

    printf ("O produto %s custa %d, possui %d de desconto e saira por %d", merc, valor, desc, vista);

    return 0;
}