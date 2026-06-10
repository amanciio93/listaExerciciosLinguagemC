/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 18:54
 * Descrição : 14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de convers˜ao
                   é: R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 3.14.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float AnguloGraus, radianos;

    printf("Informe o angulo em graus: ");
    scanf("%f", &AnguloGraus);

    radianos = AnguloGraus * 3.14 / 180;

    printf("Convertido em radianos: %.2f.", radianos);

    return 0;
}
