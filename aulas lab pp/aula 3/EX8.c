/*8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
programa termina.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    float A, B;
    
    printf ("Digite duas notas: \n");
    scanf ("%f%f", &A, &B);

    if ((A >= 0.0 && A <= 10.00) && (B >= 0.0 && B <= 10.0)) {
        printf ("A media das notas eh %.2f.", (A + B)/2);
    }else{
        printf ("As notas digitadas sao invalidas.");
    }

    return 0;
}