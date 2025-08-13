#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");
    int matriz[2][2];
    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            printf("Digite o número da coluna %d e linha %d:\n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("Matriz:\n");
    for (int linha = 0; linha< 2; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

}