/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 07/07/2026 - 20:55
     * Descrição : 14. A nota final de um estudante é calculada a partir de três notas atribuı́das entre o intervalo
                       de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral
                       e a um exame final. A média das três notas mencionadas anteriormente obedece aos
                       pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
                       com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de
                       recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaTrabalho, notaAvaliacao, NotaExameFinal, media;
    int pesoTrabalho = 2, pesoAvaliacao = 3, pesoExameFinal = 5;

    printf("Informe a nota do trabalho de laboratório de 0-10: ");
    scanf("%f", &notaTrabalho);

    printf("Informe a nota de avaliação semestral de 0-10: ");
    scanf("%f", &notaAvaliacao);
    printf("Informe a nota do exame final de 0-10: ");
    scanf("%f", &NotaExameFinal);

    if (notaTrabalho < 0 || notaTrabalho > 10 || notaAvaliacao < 0 || notaAvaliacao > 10 || NotaExameFinal < 0 || NotaExameFinal > 10)
    {
        printf("Uma ou mais notas são inválidas.\n");
        return 0;
    }

    media = ((notaTrabalho * pesoTrabalho) + (notaAvaliacao * pesoAvaliacao) + (NotaExameFinal * pesoExameFinal)) / (pesoTrabalho + pesoAvaliacao + pesoExameFinal);

    if(media >= 0 && media <= 2.9)
        printf("Aluno reprovado com media: %.2f.", media);
    else if (media >= 3 && media <= 4.9)
        printf("Aluno ficou de recuperação com media: %.2f.", media);
    else if (media > 4.9 && media <= 10)
        printf("Aluno aprovado com media %.2f.", media);

    return 0;
}
