/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 20:49
 * Descrição : 20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula
                   de convers˜ao é: L = K / 0,45, sendo K a massa em quilogramas e L a massa em libras.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilogramas, libras;

    printf("Informe a quantidade em quilogramas: ");
    scanf("%f", &quilogramas);

    libras = quilogramas / 0.45;

    printf("Em libras seria: %.2f.", libras);

    return 0;
}
