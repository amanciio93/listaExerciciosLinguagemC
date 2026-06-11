/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 11/06/2026 - 19:43
 * Descrição : 30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais, cotacaoDolar, dolares;

    printf("Informe a quantidade em reais: R$ ");
    scanf("%f", &reais);

    printf("Qual cotacao considerar? ");
    scanf("%f", &cotacaoDolar);

    dolares = reais / cotacaoDolar;

    printf("Total de U$ %.2f.", dolares);

    return 0;
}
