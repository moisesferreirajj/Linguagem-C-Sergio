#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");
    char lojas[8][100];
    char produtos[4][100];
    float precos[4][8];

    for (int indice = 0; indice < 8; indice++) {
        printf("Digite o nome da %da loja na coluna %d:\n", indice+1, indice+1);
        scanf("%s", lojas[indice]);
    }

    for (int indice = 0; indice < 4; indice++) {
        printf("Digite o nome do %d° produto na loja '%s':\n", indice+1, lojas[indice]);
        scanf("%s", produtos[indice]);
    }

    for (int indice = 0; indice < 4; indice++) {
        for (int coluna = 0; coluna < 8; coluna++) {
            printf("Digite o preço do produto '%s' na loja '%s':\n", produtos[indice], lojas[coluna]);
            scanf("%f%*c", &precos[indice][coluna]);
        }
    }

    printf("Matriz:\n");
    int acha = 0;
    for (int indice = 0; indice< 4; indice++) {
        for (int coluna = 0; coluna < 8; coluna++) {
            if (precos[indice][coluna] < 60) {
                //%-15s SERVE PARA GARANTIR QUE TENHA PELO MENOS 15 CHAR DE LARGURA;
                printf("Produto: %-15s | Loja: %-15s | Preco: R$ %.2f\n", produtos[indice], lojas[coluna], precos[indice][coluna]);
                acha = 1;
            }
        }
        printf("\n");
    }

    if (!acha == 1) {
        printf("Nenhum produto encontrado com preço de até R$ 60,00! \n");
    }

}