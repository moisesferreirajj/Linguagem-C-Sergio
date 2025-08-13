/*
* EXERCICIO 1 - ARRAY
* Faça um programa que preencha um vetor com nove números inteiros,
* calcule e mostre números primos e suas respectivas posições.
* Um número é classificado primo quando é divisivel por 1 e por ele mesmo.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    int nums[9];
    int contadorPrimos = 0;

    for (int i = 0; i < 9; i++) {
        printf("Insira o %dº número:\n", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nNúmeros primos e suas posições:\n");

    for (int i = 0; i < 9; i++) {
        int n = nums[i];
        int primo = 1;

        if (n < 2) {
            primo = 0;
        } else {
            for (int j = 2; j <= n / 2; j++) {
                if (n % j == 0) {
                    primo = 0;
                    break;
                }
            }
        }

        if (primo) {
            printf("Número %d na posição %d\n", n, i);
            contadorPrimos++;
            }
        }

    printf("\nA quantidade de números primos é de: %d", contadorPrimos);
}