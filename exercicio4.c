/*
* EXERCICIO 4
* Faça um programa que receba quatro números inteiros,
* calcule e mostre a soma desses números.
*/

#include <stdio.h>

int main () {
    // VARIAVEIS DEFINIDAS
    int n1, n2, n3, n4, resultado;

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    printf("\nQual o valor do numero 1?\n");
    scanf("%d", &n1);

    printf("Qual o valor do numero 2?\n");
    scanf("%d", &n2);

    printf("Qual o valor do numero 3?\n");
    scanf("%d", &n3);

    printf("Qual o valor do numero 4?\n");
    scanf("%d", &n4);

    printf("Efetuando calculo...\n");
    resultado = n1 + n2 + n3 + n4;

    printf("\nResultado da soma = %d", resultado);

    return 0;
}