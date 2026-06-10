/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 09/06/2026 - 21:07
 * Descrição : 5. Leia um número real e imprima a quinta parte deste número.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("Informe um numero real qualquer: ");
    scanf("%f", &num);

    printf("A quinta parte do numero %f informado e: %.2f.", num, num / 5);


    return 0;
}
