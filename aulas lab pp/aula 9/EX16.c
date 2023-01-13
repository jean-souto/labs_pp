/*16. Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que
leia a variável ‘a’ e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e
D o quádruplo.*/

#include <stdio.h>

int main ()
{
    int a, *b, **c, ***d;

    printf ("Digite um numero: ");
    scanf ("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf ("o numero eh %d", a);
    printf ("\no dobro eh %d", (*b)*2);
    printf ("\no triplo eh %d", (**c)*3);
    printf ("\no quadruplo eh %d", (***d)*4);

    return 0;
}