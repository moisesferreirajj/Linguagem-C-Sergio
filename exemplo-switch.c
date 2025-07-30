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

    float num1, num2, resultado;
    char var;

    printf("Faça sua operação (exemplo: 1 - 1):\n");
    scanf("%f %c %f", &num1, &var, &num2);

    switch (var) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado é de: %.2f" ,resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado é de: %.2f" ,resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado é de: %.2f" ,resultado);
            break;
        case '/':
            resultado = num1 / num2;
            if (num1 || num2 == 0)
                printf("Valor padrão de 0 pois está dividindo por 0!");
            else
            printf("Resultado é de: %.2f" ,resultado);
            break;
        default:
            printf("Número invalido!\n");
            break;
    }
}