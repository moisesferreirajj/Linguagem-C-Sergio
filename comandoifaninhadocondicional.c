//
// Created by moises_j_ferreira on 30/07/2025.
//

#include <stdio.h>

int main() {
    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    char ch;
    printf("Digite uma letra entre A e Z\n");
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z')
        printf("Voce acertou!");
}