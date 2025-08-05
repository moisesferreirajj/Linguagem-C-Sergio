/*
 *
 * EXEMPLO
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    int a;
    for (a = 1; a <= 20; a++) {
        printf("\n O valor de a é: %d" ,a);
    }
}