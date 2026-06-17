/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 16/06/2026 - 20:35
 * Descrição : 36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
                de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio² ∗ altura,
                onde π = 3.141592.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, raio, volume, pi = 3.141592;

    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio);

    volume = pi * (raio * raio) * altura;

    printf("Volume do cilindro = %.2f", volume);

    return 0;
}
