/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 16/06/2026 - 19:59
 * Descrição : 34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente.
                   A área do círculo é π ∗ raio², considere π = 3.141592.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorRaio, areaCirculo, valorPI = 3.141592;

    printf("Informe o valor do raio do circulo: ");
    scanf("%f", &valorRaio);

    areaCirculo = valorPI * (valorRaio * valorRaio);

    printf("A area do circulo e: %.2f.", areaCirculo);
    return 0;
}
