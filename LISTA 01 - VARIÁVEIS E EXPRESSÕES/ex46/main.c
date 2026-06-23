/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 22/06/2026 - 22:30
 * Descrição : 46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999).
                   Gere outro número formado pelos dígitos invertidos do número lido. Exemplo:

                    NúmeroLido = 123
                    NúmeroGerado = 321
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, numGerado, centena, dezena, unidade;

    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%d", &num);

    // Isolamento dos dígitos usando apenas matemática básica
    unidade = num % 10;           // Pegar o resto da divisão por 10 (algarismo das unidades)
    dezena  = (num / 10) % 10;    // Remove a unidade e pega o resto por 10 (algarismo das dezenas)
    centena = num / 100;          // Divide por 100 para isolar a centena (divisão inteira descarta o resto)

    // Reconstrução do número invertido
    numGerado = (unidade * 100) + (dezena * 10) + centena;

    printf("Numero Lido = %d\n", num);
    printf("Numero Gerado = %d\n", numGerado);

    return 0;
}
