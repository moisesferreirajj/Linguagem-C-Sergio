/*
*
* EXERCICIO 2
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
    for (a=15; a>=1; a=a-2) {
        printf("Digite um número: ");
        scanf("%d%*c", &a);
    }

}