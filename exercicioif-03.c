/*
* EXERCICIO 3
* FAÇA UM PROGRAMA QUE O USUÁRIO DIGITE DOIS NÚMEROS
* QUAISQUER E O PROGRAMA MOSTRE OS NÚMEROS DIGITADOS ORDENADOS.
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

    int n1, n2;
    printf("\nInforme dois números (ex: '10 20'):\n");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
        printf("O maior número é %d e em seguida o %d" ,n1, n2);
    else if (n1 < n2)
        printf("O maior número é %d e em seguida o %d" ,n2, n1);
    else
        printf("Número inválido!\n");
}