/*45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII para resolver o problema.*/
#include <stdio.h>
int main () {
    char A, B;
    printf ("Digite uma letra maiuscula: \n");
    scanf ("%c", &A);
    B = A + 32;
    printf ("A letra minuscula eh %c.", B);

    return 0;
}