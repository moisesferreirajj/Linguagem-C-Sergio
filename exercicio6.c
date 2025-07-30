/*
* EXERCICIO 6
* Faça um programa que receba TRÊS notas e seus
* respectivos PESO, calcule e mostre a MÉDIA PONDERADA.
*/

#include <stdio.h>

int main () {
    // VARIAVEIS DEFINIDAS
    float n1, n2, n3, media;
    int pn1, pn2, pn3;

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    printf("\nQual o valor da primeira nota?\n");
    scanf("%f", &n1);

    printf("\nQual o peso da primeira nota?\n");
    scanf("%d", &pn1);

    printf("Qual o valor da segunda nota?\n");
    scanf("%f", &n2);

    printf("Qual o peso da segunda nota?\n");
    scanf("%d", &pn2);

    printf("Qual o valor da terceira nota?\n");
    scanf("%f", &n3);

    printf("Qual o peso da terceira nota?\n");
    scanf("%d", &pn3);

    printf("Efetuando calculo...\n");
    media = (n1 * pn1 + n2 * pn2 + n3 * pn3) / (pn1 + pn2 + pn3);

    printf("\nResultado da media ponderada = %.2f", media);

    return 0;
}