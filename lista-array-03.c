/*
* EXERCICIO 3 - ARRAY
* Faça um programa que preencha:
* 1.	Um vetor com dez números inteiros;
* 2.	Calcule e mostre os números superiores a cinquenta e suas respectivas posições;
* 3.	O programa deverá mostrar mensagem se não existir nenhum número nessa condição.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    int numeros[10];
    int encontrou = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros maiores que 50 e suas posições:\n");

    for (int i = 0; i < 10; i++) {
        if (numeros[i] > 50) {
            printf("Número %d na posição %d\n", numeros[i], i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Não existe nenhum número maior que 50.\n");
    }
}