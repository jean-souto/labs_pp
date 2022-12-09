/*12. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo
de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada. */
#include <stdio.h>
#include <string.h>

int main ()
{
    int i, j;
    char code[1000];

    printf ("Digite um codigo para codificacao: ");
    fgets (code, 1000, stdin);

    j = strlen (code);

    for (i = 0; i < j; i++)
    {
        if ((code[i] >= 'a' && code[i] <= 'z') || (code[i] >= 'A' && code[i] <= 'Z'))
        {
            code[i] = code[i]+3;
        }
    }

    printf ("A traducao eh: ");
    fputs(code, stdout);

    return 0;
}