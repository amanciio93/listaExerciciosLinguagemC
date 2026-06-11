/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 11/06/2026 - 00:43
 * Descrição : 25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. A
                   fórmula de convers˜ao é: M = A ∗ 4048.58, sendo M a área em metros quadrados e A a
                   área em acres.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float acres, m2;

    printf("Informe a medida em acres: ");
    scanf("%f", &acres);

    m2 = acres * 4048.58;

    printf("Em m2 seria: %f.", m2);

    return 0;
}
