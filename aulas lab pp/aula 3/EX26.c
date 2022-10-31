/*26. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
CONSUMO (Km/l) MENSAGEM
menor que 8 Venda o carro!
entre 8 e 14 Econômico!
maior que 14 Super econômico!*/
#include <stdio.h>
int main ()
{
    float l, km, efic;

    printf ("Digite quantos km e quantos litros foram gastos: \n");
    scanf ("%f%f", &km, &l);

    efic = km/l;

    if (efic < 8)
    {
        printf ("Venda o carro!");
    }
    else
    {
        if (efic >= 8 && efic <= 14)
        {
            printf ("Economico!");
        }
        else
        {
            printf ("Super economico!");
        }
    }

    return 0;
}