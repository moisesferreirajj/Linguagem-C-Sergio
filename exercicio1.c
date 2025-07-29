//
// Created by moises_j_ferreira on 29/07/2025.
//
#include <stdio.h>

int main () {
    //VARIÁVEIS DEFINIDAS
    float salario, resultado, aumento;

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V2     #\n");
    printf("#===================#\n");

    printf("\nQual o salario daquele funcionario?\n");
    scanf("%f", &salario);

    printf("Efetuando calculo...\n");
    aumento = 0.25 * salario;
    resultado = salario + aumento;

    printf("Resultado do antigo salario = %.2f", salario);
    printf("\n");
    printf("Resultado do aumento = %.2f", aumento);
    printf("\n");
    printf("Resultado do novo salario = %.2f", resultado);
    printf("\n");
    printf("Voce recebeu 25 porcento de aumento, meus parabens!");
}