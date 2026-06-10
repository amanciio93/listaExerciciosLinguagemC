/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 09/06/2026 - 21:01
 * Descrição : 4. Leia um número real e imprima o resultado do quadrado desse número.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("Informe um numero real qualquer: ");
    scanf("%f", &num);

    printf("O numero informado ao quadrado resulta em: %f.", num * num);

    return 0;
}
