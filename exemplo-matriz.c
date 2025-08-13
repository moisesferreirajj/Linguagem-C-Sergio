#include <stdio.h>

int main() {
    //PRIMEIRO DA MATRIZ É LINHA
    //SEGUNDO DA MATRIZ É COLUNA
    //TERCEIRO É PROFUNDIDADE
    char MAT[5][4];
    printf("Insira a matriz A:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%c", &MAT[i][j]);
        }
    }
    printf("Matriz A:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c", MAT[i]);
        for (int j = 0; j < 4; j++) {
            printf("\n%c", MAT[j]);
        }
    }
}