/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio
     * Data      : 23/06/2026 - 19:35
     * Descrição : 48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdSegundos, segundos, minutos, horas;
    printf("Informe a quantidade de segundos: ");
    scanf("%d", &qtdSegundos);

    horas = qtdSegundos / 3600;
    minutos = (qtdSegundos % 3600) / 60;
    segundos = qtdSegundos % 60;

    printf("HH:MM:ss : %d:%d:%d.", horas, minutos, segundos);

    return 0;
}
