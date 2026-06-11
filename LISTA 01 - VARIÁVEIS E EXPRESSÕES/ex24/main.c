/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 11/06/2026 - 00:36
 * Descrição : 24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
                   fórmula de convers˜ao é: A = M ∗0.000247, sendo M a área em metros quadrados e A
                   a área em acres.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2, acres;

    printf("Informe a medida em M2: ");
    scanf("%f", &m2);

    acres = m2 * 0.000247;

    printf("Em acres seria: %f.", acres);

    return 0;
}
