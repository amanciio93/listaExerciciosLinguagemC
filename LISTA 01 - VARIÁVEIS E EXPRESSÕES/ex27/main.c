/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 11/06/2026 - 19:22
 * Descrição : 27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2.
                   A fórmula de convers˜ao é: M = H ∗10000, sendo M a área em metros quadrados e H
                   a área em hectares.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hectares, m2;

    printf("Informe o tamanho em hectares: ");
    scanf("%f", &hectares);

    m2 = hectares * 10000;

    printf("Em m2 seria: %.2f.", m2);

    return 0;
}
