#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");
    int matriz[5][3];
    int i, j;

    printf("=== CADASTRO DE ESTOQUES ===\n");

    for (i = 0; i < 4; i++) {
        printf("Armazém %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Digite o estoque do produto %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o custo de cada produto:\n");
    for (j = 0; j < 3; j++) {
        printf("Custo do produto %d: ", j + 1);
        scanf("%d", &matriz[4][j]);
    }

    printf("\n===== RESULTADOS =====\n");

    for (i = 0; i < 4; i++) {
        int soma = 0;
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
        printf("Armazém %d possui %d itens no total.\n", i + 1, soma);
    }

    int maiorEstoque = matriz[0][1];
    int armazemMaior = 1;
    for (i = 1; i < 4; i++) {
        if (matriz[i][1] > maiorEstoque) {
            maiorEstoque = matriz[i][1];
            armazemMaior = i + 1;
        }
    }
    printf("\nO Armazém %d possui o maior estoque do Produto 2 (%d unidades).\n", armazemMaior, maiorEstoque);

    int menorSoma = 999999, armazemMenor = 1;
    for (i = 0; i < 4; i++) {
        int soma = 0;
        for (j = 0; j < 3; j++) soma += matriz[i][j];
        if (soma < menorSoma) {
            menorSoma = soma;
            armazemMenor = i + 1;
        }
    }
    printf("O Armazém %d possui o menor estoque total (%d itens).\n", armazemMenor, menorSoma);
    //SÓ AQUELE QUEBRINHA DE LINHA RSRSRS
    printf("\n");

    for (j = 0; j < 3; j++) {
        int totalProduto = 0;
        for (i = 0; i < 4; i++) {
            totalProduto += matriz[i][j];
        }
        int custoTotal = totalProduto * matriz[4][j];
        printf("Custo total do Produto %d: R$ %d\n", j + 1, custoTotal);
    }
    //SÓ AQUELE QUEBRINHA DE LINHA RSRSRS
    printf("\n");

    for (i = 0; i < 4; i++) {
        int custoArmazem = 0;
        for (j = 0; j < 3; j++) {
            custoArmazem += matriz[i][j] * matriz[4][j];
        }
        printf("Custo total do Armazém %d: R$ %d\n", i + 1, custoArmazem);
    }
}