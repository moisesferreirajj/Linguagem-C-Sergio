#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");
    int vet[18];
    int mat[3][6];
    int contador = 0;

    for (int i = 0; i < 18; i++) {
        printf("Digite o %d número do vetor: \n",i+1);
        scanf("%d", &vet[i]);
    }

    printf("Vetores: \n");
    for (int i = 0; i < 18; i++) {
        printf("%d ", i, vet[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            mat[i][j] = vet[contador++];
        }
    }

    printf("\n\nMatriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            //O \t tem o mesmo significado do \n a unica diferença é que ele serve para tabulação, para transformar em tabela
            //ou matriz, tudo depende de como você quer chamar, fica um array bem legal assim!
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

}