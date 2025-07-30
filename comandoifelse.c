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

    if (getchar() == 'p')
        printf("Você digitou a letra p");
    else
        printf("Você não digitou a letra p");
}