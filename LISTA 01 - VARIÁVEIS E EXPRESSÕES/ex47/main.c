/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio
     * Data      : 22/06/2026 - 22:35
     * Descrição : 47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, milhar, centena, dezena, unidade;

    printf("Digite um numero inteiro de 4 digitos (1000 a 9999): ");
    scanf("%d", &num);

    // Isolamento dos dígitos usando apenas matemática básica
    milhar  = num / 1000;          // Pega o milhar na divisão inteira por 1000
    centena = (num / 100) % 10;    // Correção 2: Remove a milhar e pega o resto (isola a centena)
    dezena  = (num / 10) % 10;     // Remove a unidade e pega o resto por 10 (algarismo das dezenas)
    unidade = num % 10;            // Pega o resto da divisão por 10 (algarismo das unidades)

    printf("%d\n", milhar);
    printf("%d\n", centena);
    printf("%d\n", dezena);
    printf("%d\n", unidade);

    return 0;
}
