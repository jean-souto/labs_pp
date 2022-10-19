/*39. A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo
que da quantia total:
- O primeiro ganhador receberá 46%; 0.46
- O segundo receberá 32%; 0.32
- O terceiro receberá o restante; 0.22
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/
#include <stdio.h>
#define QUANT 780000.00
int main () {
    float A, B, C;
    A = QUANT * 0.46;
    B = QUANT * 0.32;
    C = QUANT * 0.22;
    printf ("O montante recebido por cada, respectivamente, eh de %.2f, %.2f, %.2f.", A, B, C);


    return 0;
}