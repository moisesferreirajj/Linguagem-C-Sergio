#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    int idade;
    printf("\nInforme sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 11)
        printf("Você é uma criança!\n");
    else if (idade >= 12 && idade <= 18)
        printf("Você é um adolescente!\n");
    else if (idade >= 19 && idade <= 24)
        printf("Você é um jovem!\n");
    else if (idade >= 25 && idade <= 59)
        printf("Você é um adulto!\n");
    else if (idade >= 60)
        printf("Você é um idoso!\n");
    else
        printf("Idade inválida!\n");
}