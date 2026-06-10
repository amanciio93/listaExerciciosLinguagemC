/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 09/06/2026 - 20:54
 * Descrição : 3. Pecça ao usúario para digitar três valores inteiros e imprima a soma deles.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("Informe tres valores inteiros a seguir: \n\n");

    printf("Primeiro numero: ");
    scanf("%d", &num1);

    printf("Segundo numero: ");
    scanf("%d", &num2);

    printf("Terceiro numero: ");
    scanf("%d", &num3);

    printf("Os numeros informados foram: %d, %d e %d.", num1, num2, num3);

    return 0;
}
