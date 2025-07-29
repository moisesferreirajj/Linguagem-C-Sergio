/*
* EXERCICIO 3
* Faça um programa que receba o valor de um depósito
* e o valor da taxa de juros, calcule e mostre o valor
* do rendimento e o valor total depois do rendimento.
*/

#include <stdio.h>

int main () {
    // VARIAVEIS DEFINIDAS
    float deposito, rendimento, taxa, total;

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    printf("\nQual o valor do deposito?\n");
    scanf("%f", &deposito);

    printf("Qual a taxa de juros? (ex: para 5%%, digite 5)\n");
    scanf("%f", &taxa);

    printf("Efetuando calculo...\n");
    rendimento = deposito * taxa / 100;
    total = deposito + rendimento;

    printf("\nValor do deposito = R$ %.2f", deposito);
    printf("\nTaxa de juros = %.2f%%", taxa);
    printf("\nRendimento = R$ %.2f", rendimento);
    printf("\nTotal apos rendimento = R$ %.2f\n", total);

    return 0;
}