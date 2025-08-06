#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n\n");

    int x = 0;
    while (x != 5)
    {
        printf("Valor de X = %d\n", x);
        x = x + 1;
    }
    printf("\nValor de X após sair da estrutura = %d\n", x);
}