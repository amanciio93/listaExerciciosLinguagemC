/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 07/07/2026 - 20:42
     * Descrição : 13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
                       a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
                       e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
                       superior a 60 pontos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    int peso1 = 1, peso2 = 2;

    printf("Informe a primeira nota de 0-100 de peso um: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota de de 0-100 peso um: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota de de 0-100 peso dois: ");
    scanf("%f", &nota3);

    media = ((nota1 * peso1) + (nota2 * peso1) + (nota3 * peso2)) / (peso1 + peso1 + peso2);

    if(media >= 60.0)
        printf("Aluno aprovado com media: %.2f.", media);
    else
        printf("Aluno reprovado com media: %.2f.", media);

    return 0;
}
