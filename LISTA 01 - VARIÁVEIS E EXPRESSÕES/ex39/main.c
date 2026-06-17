/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 16/06/2026 - 20:50
 * Descrição : 39. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
                    Sendo que da quantia total:
                        • O primeiro ganhador receberá 46%;
                        • O segundo receberá 32%;
                        • O terceiro receberá o restante;
                    Calcule e imprima a quantia ganha por cada um dos ganhadores.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float premio = 780000, primeiroGanhador, segundoGanhador, porcentagemUm = 0.46, porcentagemDois = 0.32;

    printf("O VALOR DE 780.000,00 DIVIDIDO CONFORME REGRAS DO SORTEIO: \n\n");
    primeiroGanhador = premio * porcentagemUm;
    printf("\tPrimeiro lugar recebe: %.2f, referente a 46 por cento do valor.\n", primeiroGanhador);
    segundoGanhador = premio * porcentagemDois;
    printf("\tSegundo lugar recebe: %.2f, referente a 32 por cento do valor.\n", segundoGanhador);
    printf("\tTerceiro lugar recebe %.2f, referente ao restante do premio.\n", premio - primeiroGanhador - segundoGanhador);

    return 0;
}
