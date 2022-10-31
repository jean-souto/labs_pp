/*39. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia: */
#include <stdio.h>
int main ()
{
    float salat, temp, salnov;

    printf ("Digite seu salario atual: ");
    scanf ("%f", &salat);

    printf ("Digite seu tempo de contribuicao (anos): ");
    scanf ("%f", &temp);

    if (salat <= 500)
    {
        salnov = salat * 1.25;
    }
    else
    {
        if (salat > 500 && salat <= 1000)
        {
            salnov = salat * 1.20;
        }
        else
        {
            if (salat > 1000 && salat <= 1500)
            {
                salnov = salat * 1.15;
            }
            else
            {
                if (salat > 1500 && salat <= 2000)
                {
                    salnov = salat * 1.10;
                }
                else
                {
                    salnov = salat;
                }
            }
        }
    }

    if (temp < 1)
    {
        printf ("Seu salario eh de: R$%.2f. Voce nao tem direito a bonus.", salnov);
    }
    else
    {
        if (temp >= 1 && temp <= 3)
        {
            printf ("Seu salario eh de: R$%.2f. Seu bonus eh de R$100.00", salnov);
        }
        else
        {
            if (temp >= 4 && temp <= 6)
            {
                printf ("Seu salario eh de: R$%.2f. Seu bonus eh de R$200.00", salnov);
            }
            else
            {
                if (temp >= 7 && temp <= 10)
                {
                    printf ("Seu salario eh de: R$%.2f. Seu bonus eh de R$300.00", salnov);
                }
                else
                {
                    printf ("Seu salario eh de: R$%.2f. Seu bonus eh de R$500.00", salnov);
                }
            }
        }
    }

    return 0;
}