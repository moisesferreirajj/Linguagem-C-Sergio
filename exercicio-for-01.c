/*
*
EXE 001 – Salario Aumento Anual (Utilize FOR)
Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
a) Esse funcionário foi contratado em 2018, com salário inicial de R$ 1.000,00;
b) Em 2019, ele recebeu aumento de 1,5% sobre seu salário inicial;
c) A partir de 2020 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano anterior.
Faça um programa que determine o salário atual desse funcionário.
*
*/

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

    for (ano = 2019; ano <= 2025; ano++) {
        salario += salario * (percentual / 100.0);
        printf("O ano é %d e o salário passou a: R$ %.2f (aumento de %.2f%)\n", ano, salario, percentual);
        percentual *= 2;
    }
}