/*
* EXERCICIO 4
* Faça um programa que receba quatro números inteiros,
* calcule e mostre a soma desses números.
*/

#include <stdio.h>

int main () {
    // VARIAVEIS DEFINIDAS
    float n1, n2, n3, media;

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    printf("\nQual o valor da primeira nota?\n");
    scanf("%f", &n1);

    printf("Qual o valor da segunda nota?\n");
    scanf("%f", &n2);

    printf("Qual o valor da terceira nota?\n");
    scanf("%f", &n3);

    printf("Efetuando calculo...\n");
    media = (n1 + n2 + n3) / 3;

    printf("\nResultado da media aritmetica = %.2f", media);

    return 0;
}