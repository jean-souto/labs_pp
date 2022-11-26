/*15. Crie um programa que receba três valores (obrigatoriamente maiores que zero),
representando as medidas dos três lados de um triângulo. Elabore funções para:

a) Determinar se eles lados formam um triângulo, sabendo que:
 O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.

b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo
que:
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes.*/

#include <stdio.h>

int triangulo (int a, int b, int c);

void nome (int teste, int a, int b, int c);

int main ()
{
    int a, b, c, teste;

    printf ("Digite os lados do triangulo: ");
    scanf ("%d%d%d", &a, &b, &c);

    teste = triangulo (a, b, c);
    nome (teste, a, b, c);
}

int triangulo (int a, int b, int c)
{
    if ((a < b+c) && (b < a+c) && (c < b+a))
    {
        printf ("Eh um triangulo!");

        return 1;

    }
    else
    {
        printf ("Nao eh triangulo");
    
        return 0;    
    }
}

void nome (int teste, int a, int b, int c)
{
    if (teste == 0)
    {
        return 0;    
    }
    
    if (teste == 1)
    {
        if (a == b && b == c)
        {
            printf ("\neh um triangulo equilatero");
        }
        else if (a == b || b == c || c == a)
             {
                printf ("\neh um triangulo isosceles");
             }
             else
             {
                printf ("\nEh um triangulo escaleno");
             }
    }
}