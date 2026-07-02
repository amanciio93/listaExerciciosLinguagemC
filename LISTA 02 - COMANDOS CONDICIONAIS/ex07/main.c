/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 02/07/2026 - 19:35
     * Descrição : 7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
                      números forem iguais, imprima a mensagem Números iguais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("%d MAIOR QUE %d\nDiferença de %d entre ambos.", num1, num2, num1 - num2);
    else if (num2 > num1)
        printf("%d MAIOR QUE %d\nDiferença de %d entre ambos.", num2, num1, num2 - num1);
    else
        printf("Numeros iguais!");

    return 0;
}
