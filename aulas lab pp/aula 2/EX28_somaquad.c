/*28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lidos*/
#include <stdio.h> 
int main () {
    int n1, n2, n3, soma;
    printf ("Digite tres valores inteiros: \n");
    scanf ("%d%d%d", &n1, &n2, &n3);
    soma = (n1*n1) + (n2*n2) + (n3*n3);
    printf ("A soma dos quadrados dos valores eh %d.", soma);

    return 0;
}