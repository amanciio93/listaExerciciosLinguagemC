/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 17/06/2026 - 22:25
 * Descrição : 43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
                    • o total a pagar com desconto de 10%;
                    • o valor de cada parcela, no parcelamento de 3× sem juros;
                    • a comiss˜ao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
                    • a comiss˜ao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorTotal, totalDesconto, tresSemJuros, comissaoAVista, comissaoParcelada;

    printf("Valor total da venda: ");
    scanf("%f", &valorTotal);

    totalDesconto = valorTotal - (valorTotal * 0.10);
    tresSemJuros = valorTotal / 3;
    comissaoAVista = totalDesconto * 0.05;
    comissaoParcelada = valorTotal * 0.05;

    printf("\n===== RESUMO DA VENDA =====\n");
    printf("Valor total da venda........: R$ %.2f\n", valorTotal);
    printf("Valor com 10%% de desconto..: R$ %.2f\n", totalDesconto);
    printf("Parcela (3x sem juros)......: R$ %.2f\n", tresSemJuros);
    printf("Comissao venda a vista......: R$ %.2f\n", comissaoAVista);
    printf("Comissao venda parcelada....: R$ %.2f\n", comissaoParcelada);

    return 0;
}
