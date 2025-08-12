/*
*
EXE 002 – Menu Salario (Utilize WHILE)
Faça um programa que receba duas notas de seis alunos. Calcule e mostre: 
A média aritmética das duas notas de cada aluno; 
E a mensagem que está na tabela a seguir:

o total de alunos aprovados;
o total de alunos de exame;
o total de alunos reprovados;
a média do Aluno. 
a média da Classe.
*
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    int i = 1;
    float nota1, nota2, media;
    int aprovados = 0, exame = 0, reprovados = 0;
    float somaMedias = 0;

    while (i <= 6) {
        printf("\nAluno %d:\n", i);

        printf("Digite a 1ª nota: ");
        scanf("%f", &nota1);

        printf("Digite a 2ª nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2.0;
        somaMedias += media;

        printf("Média do aluno %d: %.2f\n", i, media);

        if (media <= 3) {
            printf("Situação: Reprovado\n");
            reprovados++;
        } else if (media <= 7) {
            printf("Situação: Exame\n");
            exame++;
        } else {
            printf("Situação: Aprovado\n");
            aprovados++;
        }

        i++;
    }

    printf("\n===== RESULTADOS FINAIS =====\n");
    printf("Total de aprovados: %d\n", aprovados);
    printf("Total de exame: %d\n", exame);
    printf("Total de reprovados: %d\n", reprovados);
    printf("Média da classe: %.2f\n", somaMedias / 6);
}