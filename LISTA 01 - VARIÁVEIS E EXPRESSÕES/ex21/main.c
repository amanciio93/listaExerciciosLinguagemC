/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 11/06/2026 - 00:22
 * Descrição : 21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula
                   de convers˜ao é: K = L ∗ 0.45, sendo K a massa em quilogramas e L a massa em libras.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float libras, quilogramas;

    printf("Informe a quantidade em libras: ");
    scanf("%f", &libras);

    quilogramas = libras * 0.45;

    printf("Em quilogramas seria: %.2f.", quilogramas);


    return 0;
}
