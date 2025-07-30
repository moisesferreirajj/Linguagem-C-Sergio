//
// Created by moises_j_ferreira on 30/07/2025.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    int a,b;
    printf("\nDigite 2 números:\n");
    scanf("%d %d", &a, &b);
    if (b)
        printf("%.2f", a/b);
    else
        printf("Não posso dividir por zero");
}