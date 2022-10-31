/*20. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
conceitos:
 O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois
lados;
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes;*/
#include <stdio.h>
int main ()
{
    int ladoA, ladoB, ladoC;

    printf ("Digite os tres lados do triangulo: \n");
    scanf ("%d%d%d", &ladoA, &ladoB, &ladoC);

    if ((ladoA > ladoB+ladoC) || (ladoB > ladoA+ladoC) || (ladoC > ladoA+ladoB))
    {
        printf ("NAO EH TRIANGULO!");
    }
    else
    {
        if ((ladoA == ladoB) && (ladoA == ladoC))
        {
            printf ("Eh um triangulo equilatero.");
        }
        else
        {
            if ((ladoA == ladoB) || (ladoB == ladoC) || (ladoA == ladoC))
            {
                printf ("Eh um triangulo isosceles.");
            }
            else
            {
                printf ("Eh um triangulo escaleno.");
            }
        }
    }

    return 0;
}