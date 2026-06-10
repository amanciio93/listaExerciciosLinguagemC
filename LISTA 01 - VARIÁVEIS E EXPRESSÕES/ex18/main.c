/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 20:00
 * Descrição : 18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
                   fórmula de convers˜ao é: L = 1000 ∗ M, sendo L o volume em litros e M o volume em
                   metros cúbicos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m3, lts;

    printf("Informe o valor em m3: ");
    scanf("%f", &m3);

    lts = 1000 * m3;

    printf("Em litros seria: %.2f.", lts);

    return 0;
}
