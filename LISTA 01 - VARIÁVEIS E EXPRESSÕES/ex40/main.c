/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 16/06/2026 - 21:00
 * Descrição : 40. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite
                   o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser
                   paga, sabendo-se que s˜ao descontados 8% para imposto de renda.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorDiaria = 30, pagamentoBruto, pagamentoLiquido, IR = 0.08;
    int diasTrabalhados;

    printf("Quantos dias foram trabalhados?");
    scanf("%d", &diasTrabalhados);

    pagamentoBruto = diasTrabalhados * valorDiaria;
    pagamentoLiquido = pagamentoBruto - (pagamentoBruto * IR);

    printf("O valor final, com o desconto de oito por cento de imposto de renda fica: %.2f", pagamentoLiquido);


    return 0;
}
