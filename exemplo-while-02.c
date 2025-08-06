#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n\n");

    int x = 1;
    int y = 10;
    while (y > x)
    {
        printf("Valor de Y = %d\n", y);
        y=y-2;
    }
    printf("\nValor de Y após sair da estrutura = %d\n", y);
}