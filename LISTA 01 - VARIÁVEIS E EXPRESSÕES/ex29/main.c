/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 11/06/2026 - 19:37
 * Descrição : 29. Leia quatro notas, calcule a média aritmética e imprima o resultado.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, mediaAritmetica;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("Informe a quarta nota: ");
    scanf("%f", &nota4);

    mediaAritmetica = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Baseado nas notas informadas a media fica em: %.2f.", mediaAritmetica);

    return 0;
}
