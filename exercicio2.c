/*
* EXERCICIO 2
* Faça um programa que receba o salário base de um funcionário,
* calcule e mostre o salário a receber, sabendo-se que o funcionário
* tem gratificação de 5% sobre o salário base e paga imposto de 7%
* também sobre o salário base. Faça exibir o valor da gratificação,
* valor do imposto e o salário a receber.
*/

#include <stdio.h>

int main () {
    //VARIÁVEIS DEFINIDAS
    float salario, resultado, imposto, gratificacao;

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    printf("\nQual o salario do funcionario?\n");
    scanf("%f", &salario);

    printf("Efetuando calculo...\n");
    gratificacao = salario * 0.05;
    imposto = salario * 0.07;
    resultado = salario + gratificacao - imposto;

    printf("\nResultado do antigo salario = %.2f", salario);
    printf("\n");
    printf("Resultado da gratificacao = %.2f", gratificacao);
    printf("\n");
    printf("Resultado do imposto = %.2f", imposto);
    printf("\n");
    printf("Resultado do salario com gratificacao e desconto do imposto = %.2f", resultado);
    printf("\n");

    return 0;
}