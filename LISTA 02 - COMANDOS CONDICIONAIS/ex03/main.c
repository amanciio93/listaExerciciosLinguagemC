/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 02/07/2026 - 18:30
     * Descrição : 3. Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário,
                      imprima o numero ao quadrado.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;

    printf("Informe um numero real: ");
    scanf("%f", &numero);

    if(numero >= 0)
        printf("A raiz quadrada de %.2f = %.2f.", numero, sqrt(numero));
    else
        printf("O quadrado de %.2f = %.2f.", numero, numero * numero);

    return 0;
}
