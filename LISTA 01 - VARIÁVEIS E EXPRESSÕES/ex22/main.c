/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 11/06/2026 - 00:26
 * Descrição : 22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula
                   de convers˜ao é: M = 0.91 ∗ J, sendo J o comprimento em jardas e M o comprimento
                   em metros.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jardas, metros;

    printf("Informe a quantidade em jardas: ");
    scanf("%f", &jardas);

    metros = 0.91 * jardas;

    printf("Em metros seria: %.2f.", metros);

    return 0;
}
