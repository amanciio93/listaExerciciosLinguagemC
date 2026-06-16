/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 16/06/2026 - 00:53
 * Descrição : 32. Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
                   seu dobro.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Informe um umero inteiro: ");
    scanf("%d", &num);

    printf("Seu numero: %d.\nSeu triplo: %d.\nSeu dobro: %d.", num, num * 3, num * 2);
    printf("%d + %d = %d => Soma do sucessor do triplo com o antecessor do dobro.", num * 3 + 1, num * 2 - 1, (num * 3 + 1) + (num * 2 - 1));

    return 0;
}
