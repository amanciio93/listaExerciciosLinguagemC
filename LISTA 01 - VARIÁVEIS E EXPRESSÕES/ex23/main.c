/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 11/06/2026 - 00:32
 * Descrição : 23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula
                   de convers˜ao é: J = M / 0.91, sendo J o comprimento em jardas e M o comprimento em
                   metros.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros, jardas;

    printf("Informe a quantidade em metros: ");
    scanf("%f", &metros);

    jardas = metros / 0.91;

    printf("Em jardas seria: %.2f.", jardas);

    return 0;
}
