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

    int numero;
    printf("\nInforme um numero:\n");
    scanf("%d", &numero);

    if (numero < 0)
        printf("Numero menor que zero!\n");
    else if (numero < 10)
        printf("Numero >=0 e <10\n");
    else if (numero < 100)
        printf("Numero >=10 e <100\n");
    else
        printf("Numero >= 100\n");
}