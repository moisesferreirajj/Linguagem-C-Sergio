#include <stdio.h>

int main() {
    printf("Hello World!\n");

    float numero1, numero2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    resultado = numero1 + numero2;
    printf("Valor total do seu cálculo é de: %.2f\n", resultado);

    return 0;
}