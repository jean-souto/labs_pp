/*
1 a e 2 a hora -                R$1,00 cada;
3 a e 4 a hora -                R$1,40 cada;
5 a hora e seguintes -          R$2,00 cada;
O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse
permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são
apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par
12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo
teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24
horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação
de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.*/
#include <stdio.h>
int main ()
{
    float hora, minuto, valor, horai, mini, horaf, minf;

    printf ("Digite o horario de entrada (hh e depois mm): ");
    scanf ("%f%f", &horai, &mini);

    printf ("Digite o horario de saida (hh e depois mm): ");
    scanf ("%f%f", &horaf, &minf);

    if (horai > horaf)
    {
        hora = (((horai+horaf)*60)+mini+minf)/60;
        if (hora <= 1)
        {
            printf ("Voce deve pagar: R$1.00");
        }
        else
        {
            if (hora > 1 && hora <= 2)
            {
                printf ("Voce deve pagar: R$2.00");
            }
            else
            {
                if (hora > 2 && hora <= 3)
                {
                    printf ("Voce deve pagar: R$3.40");
                }
                else
                {
                    if (hora > 3 && hora <= 4)
                    {
                        printf ("Voce deve pagar: R$4.80");
                    }
                    else
                    {
                        if (hora > 4)
                        {
                            valor = hora-4;
                            
                            if (valor < 1)
                            {
                                ++valor;
                                valor = (((int)(valor/1))*2);
                                printf ("Voce deve pagar: R$%.2f", valor+4.80);
                            }
                            else
                            {
                                valor = (((int)(valor/1))*2);
                                printf ("Voce deve pagar: R$%.2f", valor+4.80);
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        if (horai < horaf)
        {
            hora = (((horaf-horai)*60)+mini+minf)/60;
            if (hora <= 1)
            {
                printf ("Voce deve pagar: R$1.00");
            }
            else
            {
                if (hora > 1 && hora <= 2)
                {
                    printf ("Voce deve pagar: R$2.00");
                }
                else
                {
                    if (hora > 2 && hora <= 3)
                    {
                        printf ("Voce deve pagar: R$3.40");
                    }
                    else
                    {
                        if (hora > 3 && hora <= 4)
                        {
                            printf ("Voce deve pagar: R$4.80");
                        }
                        else
                        {
                            if (hora > 4)
                            {
                                valor = hora-4;
                            
                                if (valor < 1)
                                {
                                    ++valor;
                                    valor = (((int)(valor/1))*2);
                                    printf ("Voce deve pagar: R$%.2f", valor+4.80);
                                }
                                else
                                {
                                    valor = (((int)(valor/1))*2);
                                    printf ("Voce deve pagar: R$%.2f", valor+4.80);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}