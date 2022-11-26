/*13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá
ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’
será efetuada uma divisão*/

#include <stdio.h>

float calcular (float a, float b, char comando);

int main ()
{
    float a, b;
    char comando;

    printf ("Digite dois numeros para operacao: ");
    scanf ("%f %f", &a, &b);

    printf ("Digite a operacao: \n+ mais\n- menos\n* multiplicacao\n / divisao\n");
    scanf (" %c", &comando);

    if (calcular (a, b, comando) == 0)
    {
        printf ("op invalida");
    }
    else
    {
        printf ("O resultado eh %.2f", calcular (a, b, comando));
    }
}

float calcular (float a, float b, char comando)
{
    switch (comando)
    {
    case '+':
        return a + b;
        break;

    case '-':
        return a - b;   
        break;

    case '*':
        return a * b;
        break;

    case '/':
        return a / b;
        break;

    default:
        return 0;
        break;
    }
}