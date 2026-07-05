/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 04/07/2026 - 23:30
     * Descrição : 12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
                       inválido”. Se o número for positivo, calcular o logaritmo deste numero.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero;

    printf("Informe um numero inteiro maior que 0: ");
    scanf("%d", &numero);

    if (numero <= 0)
    {
        printf("Numero invalido!");
        return 0;
    }

    printf("O log natural de %d é: %.2f.\n", numero, log(numero));
    printf("O log na base 10 de %d é: %.2f.", numero, log10(numero));

    return 0;
}
