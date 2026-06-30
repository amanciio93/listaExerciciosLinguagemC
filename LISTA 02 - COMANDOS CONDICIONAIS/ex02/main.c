/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 30/06/2026 - 16:15
     * Descrição : 2. Leia um número fornecido pelo usuário.
                      Se esse número for positivo, calcule a raiz
                      quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
                      número é inválido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero;
    float raiz;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if(numero > 0)
    {
        raiz = sqrt(numero);
        printf("Raiz de %d: %.2f.", numero, raiz);
    }
    else
        printf("Numero negativo ou invalido!");


    return 0;
}
