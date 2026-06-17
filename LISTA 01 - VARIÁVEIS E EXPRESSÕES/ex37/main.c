/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 16/06/2026 - 20:40
 * Descrição : 37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
                   em vista que o desconto foi de 12%.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorProduto, desconto = 0.12, valorFinal;

    printf("Informe o valor do produto: ");
    scanf("%f", &valorProduto);

    valorFinal = valorProduto - (valorProduto * desconto);

    printf("Com 12 por cento de desconto o valor sera de: %.2f", valorFinal);

    return 0;
}
