/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 11/06/2026 - 19:22
 * Descrição : 26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares.
                   A fórmula de convers˜ao é: H = M ∗ 0.0001, sendo M a área em metros quadrados e H
                   a área em hectares.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2, hectares;

    printf("Informe o tamanho em metros quadrados: ");
    scanf("%f", &m2);

    hectares = m2 * 0.0001;

    printf("Em hectares seria: %.2f.", hectares);

    return 0;
}
