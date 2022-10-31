/*32. Escrever um programa que leia o código do produto escolhido do cardápio de uma
lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete
segue o padrão abaixo:
Especificação    Código Preço
Cachorro Quente  100 1,20
Bauru Simples    101 1,30
Bauru com Ovo    102 1,50
Hambúrguer       103 1,20
Cheeseburguer    104 1,70
Suco             105 2,20
Refrigerante     106 1,00 */
#include <stdio.h>
int main ()
{
    int cod, quantidade;
    float valor;

    printf ("Digite o codigo do produto: \n\nCachorro quente (100) \nBauru simples (101) \nBauru com ovo (102) \nHamburguer (103) \nCheeseburguer (104) \nSuco (105) \nRefrigerante (106)\n");
    scanf ("%d", &cod);

    switch (cod)
    {
        case 100 :

            printf ("Digite a quantidade: ");
            scanf ("%d", &quantidade);
        
            valor = quantidade*1.20;

            printf ("O valor dos produtos eh de %.2f.", valor);
        
        break;

        case 101 :

            printf ("Digite a quantidade: ");
            scanf ("%d", &quantidade);
        
            valor = quantidade*1.30;

            printf ("O valor dos produtos eh de %.2f.", valor);
        
        break;

        case 102 :

            printf ("Digite a quantidade: ");
            scanf ("%d", &quantidade);
        
            valor = quantidade*1.50;

            printf ("O valor dos produtos eh de %.2f.", valor);
        
        break;

        case 103 :

            printf ("Digite a quantidade: ");
            scanf ("%d", &quantidade);
        
            valor = quantidade*1.20;

            printf ("O valor dos produtos eh de %.2f.", valor);
        
        break;

        case 104 :

            printf ("Digite a quantidade: ");
            scanf ("%d", &quantidade);
        
            valor = quantidade*1.70;

            printf ("O valor dos produtos eh de %.2f.", valor);
        
        break;

        case 105 :

            printf ("Digite a quantidade: ");
            scanf ("%d", &quantidade);
        
            valor = quantidade*2.20;

            printf ("O valor dos produtos eh de %.2f.", valor);
        
        break;

        case 106 :

            printf ("Digite a quantidade: ");
            scanf ("%d", &quantidade);
        
            valor = quantidade*1.0;

            printf ("O valor dos produtos eh de %.2f.", valor);
        
        break;
        
        default :
            
            printf ("Codigo invalido!");
            
        break;

    }

    return 0;
}