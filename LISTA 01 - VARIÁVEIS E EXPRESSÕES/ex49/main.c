/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio
     * Data      : 23/06/2026 - 19:35
     * Descrição : 49. Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duração, em
                       segundos, de uma experiência biológica. O programa deve resultar com o novo horário
                       (hora, minuto e segundo) do termino da mesma.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos, minutos, horas, duracao, totalSegundos;

    printf("Informe a hora de inicio: ");
    scanf("%d", &horas);
    printf("Informe os minutos de inicio: ");
    scanf("%d", &minutos);
    printf("Informe os segundos de inicio: ");
    scanf("%d", &segundos);
    printf("Informe a duracao da experiencia: ");
    scanf("%d", &duracao);

    printf("\nHora de inicio: %02d:%02d:%02d.", horas, minutos, segundos);
    printf("\nDuracao: %d", duracao);

    totalSegundos = horas * 3600 + minutos * 60 + segundos;

    totalSegundos += duracao;

    horas = (totalSegundos / 3600) % 24;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("\nHora de termino: %02d:%02d:%02d.", horas, minutos, segundos);


    return 0;

}
