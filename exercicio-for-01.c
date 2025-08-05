#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    float salario = 1000.0;
    float percentual = 1.5;
    int ano;

    printf("\nO Salário em 2018 era de: R$ %.2f\n", salario);

    for (ano = 2018; ano <= 2025; ano++) {
        salario += salario * (percentual / 100.0);
        if (ano >= 2020 ) {
            percentual *= 2;
        }
        printf("O ano é %d e o salário recebeu um aumento de: %.2f\n", ano, salario);
    }
}
