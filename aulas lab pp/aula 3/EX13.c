/*13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.*/
#include <stdio.h>
int main ()
{
    float n1, n2, n3, mp;

    printf ("Digite o valor das notas: ");
    scanf ("%f%f%f", &n1, &n2, &n3);

    mp = (n1+n2+(n3*2))/4;

    if (mp >= 60.0)
    {
        printf ("Voce foi aprovado!");
    }
    else
    {
        printf ("voce foi reprovado.");
    }

    return 0;
}