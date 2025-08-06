/*
 *
EXE 001 – Mortalidade Infantil (Utilize WHILE)
Foi feita uma pesquisa para determinar o índice de mortalidade infantil em certo período. Faça um programa que:
a) Leia o número de crianças nascidas no período;
b) Identifique o sexo (M ou F) e o tempo de vida de cada criança nascida.
O programa deve calcular e mostrar:
1 - A percentagem de crianças do sexo feminino mortas no período;
2 - A percentagem de crianças do sexo masculino mortas no período;
3 - A percentagem de crianças que viveram 24 meses ou menos no período.
*
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h> // BIBLIOTECA PARA USAR tolower()

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    int total, i = 0;
    int fem = 0, masc = 0;
    int mortesFem = 0, mortesMasc = 0, ate24 = 0;
    char sexo;
    int meses;

    printf("Quantidade de crianças nascidas:\n");
    scanf("%d", &total);

    while (i < total) {
        do {
            printf("Criança %d - Sexo (M/F):\n", i + 1);
            scanf(" %c", &sexo);
            sexo = tolower(sexo);
        } while (sexo != 'm' && sexo != 'f');

        do {
            printf("Criança %d - Meses de vida:\n", i + 1);
            scanf("%d", &meses);
        } while (meses < 0);

        if (sexo == 'm') {
            masc++;
            if (meses == 0) mortesMasc++;
        } else {
            fem++;
            if (meses == 0) mortesFem++;
        }

        if (meses <= 24) ate24++;
        i++;
    }

    printf("\n===== RESULTADOS =====\n");
    printf("Quantidade de crianças: %d\n", total);
    printf("Percentual mortes femininas: %.2f%% (%d de %d)\n", mortesFem * 100.0 / fem, mortesFem, fem);
    printf("Percentual mortes masculinas: %.2f%% (%d de %d)\n", mortesMasc * 100.0 / masc, mortesMasc, masc);
    printf("Percentual que viveram menos de 24 meses: %.2f%%\n", ate24 * 100.0 / total);
}