/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 22/06/2026 - 22:20
 * Descrição : 45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
                   ASCII para resolver o problema.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letraMinuscula, letraMaiuscula;

    printf("Informe uma letra MAIUSCULA: ");
    scanf("%c", &letraMaiuscula);

    //Somando 32 ao valor ASCII da letra maiuscula, encontramos a letra minuscula, 32 posições a frente;
    letraMinuscula = letraMaiuscula + 32;

    printf("Letra minuscula: %c.", letraMinuscula);

    return 0;
}
