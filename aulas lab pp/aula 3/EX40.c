/*40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.*/
#include <stdio.h>
int main ()
{
    float fabr, custo;

    printf ("Digite o custo de fabrica do veiculo: ");
    scanf ("%f", &fabr);

    if (fabr < 12000)
    {
        printf ("O custo para o consumidor eh de: R$%.2f", fabr*1.05);
    }
    else
    {
        if (fabr >= 12000 && fabr <= 25000)
        {
            printf ("O custo para o consumidor eh de: R$%.2f", fabr*1.25);
        }
        else
        {
            printf ("O custo para o consumidor eh de: R$%.2f", fabr*1.35);
        }
    }

    return 0;
}