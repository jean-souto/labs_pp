/*11. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá
calcular a média ponderada, com pesos 5, 3 e 2.*/

#include <stdio.h>

float media (float nota1, float nota2, float nota3, char comando);

int main ()
{
    float nota1, nota2, nota3;
    char comando;

    printf ("Digite suas tres notas: ");
    scanf ("%f%f%f", &nota1, &nota2, &nota3);

    printf ("Digite qual a media desejada: \nP - Ponderada\nA - Aritmetica");
    scanf (" %c", &comando);

    printf ("A media eh %.2f", media (nota1, nota2, nota3, comando));
    
    return 0;
}

float media (float nota1, float nota2, float nota3, char comando)
{
    float media;

    if (comando == 'P')
    {
        return media = ((nota1*5)+(nota2*3)+(nota3*2))/10;
    }
    
    if (comando == 'A')
    {
        return media = (nota1+nota2+nota3)/3;
    }
}