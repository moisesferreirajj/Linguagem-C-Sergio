/*
 * EXERCICIO 1
 * FAÇA UM PROGRAMA QUE USUÁRIO DIGITE TRÊS NÚMEROS QUAISQUER
 * E O PROGRAMA RETORNE NA TELA UMA MENSAGEM DIZENDO QUAL É O
 * MAIOR NÚMERO DIGITADO. OBS: UTILIZE IF E IF-ELSE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    int n1, n2, n3;
    printf("\nInforme três números:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("O maior número é o primeiro que foi colocado: %d\n", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("O maior número é o segundo que foi colocado: %d\n", n2);
    else
        printf("O maior número é o terceiro que foi colocado: %d\n", n3);

}