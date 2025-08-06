#include <stdio.h>
#include <locale.h>
#include <ctype.h> // BIBLIOTECA PARA USAR tolower()

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    int i = 1;
    float notas = 1;
    float media;

    while (i < 6) {
        do {
            printf("A %.0f° nota do aluno %d é de:\n", notas, i);
        } while (notas < 2);

        i++;
    }

    printf("\n===== RESULTADOS =====\n");
}
