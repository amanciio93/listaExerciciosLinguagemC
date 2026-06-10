/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 20:46
 * Descrição : 19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
                   fórmula de convers˜ao é: M = L / 1000, sendo L o volume em litros e M o volume em metros cúbicos.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros, m3;

    printf("Informe a quantidade em litros: ");
    scanf("%f", &litros);

    m3 = litros / 1000;

    printf("Em metros cubicos seria: %.2f.", m3);

    return 0;
}
