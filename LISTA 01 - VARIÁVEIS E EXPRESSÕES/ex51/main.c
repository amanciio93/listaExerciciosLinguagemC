/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio
     * Data      : 23/06/2026 - 20:15
     * Descrição : 51. Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
                       distância da origem (0,0).
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, distancia;

    printf("Informe o ponto X: ");
    scanf("%f", &x);
    printf("Informe o ponto Y: ");
    scanf("%f", &y);

    distancia = sqrt(x * x + y * y);

    printf("Distancia: %.2f.", distancia);

    return 0;

}
