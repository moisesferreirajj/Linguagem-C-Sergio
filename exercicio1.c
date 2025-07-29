/*
* EXERCICIO 1
* Faça um programa que receba o salário de um funcionário, calcule e mostre:
* o salário atual,
* o valor do aumento e
* o novo salário, sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>

int main () {
    //VARIÁVEIS DEFINIDAS
    float salario, resultado, aumento;

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V2     #\n");
    printf("#===================#\n");

    printf("\nQual o salario do funcionario?\n");
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
    printf("O funcionario recebeu 25 porcento de aumento!");
}