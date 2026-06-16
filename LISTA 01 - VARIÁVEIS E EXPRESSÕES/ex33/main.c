/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 16/06/2026 - 19:54
 * Descrição : 33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado, area;

    printf("Informe a medida do lado do quadrado: ");
    scanf("%d", &lado);

    area = lado * lado;

    printf("A area do quadrado e: %d", area);
    return 0;
}
