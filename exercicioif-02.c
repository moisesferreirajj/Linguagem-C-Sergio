/*
* EXERCICIO 2
* FAÇA UM PROGRAMA QUE PERGUNTE A IDADE DO USUÁRIO, O MESMO DIGITA A IDADE E
* ESTE PROGRAMA DEVE RETORNAR UMA MENSAGEM INFORMANDO EM QUAL CLASSIFICAÇÃO O USUÁRIO ESTÁ:
* A) CRIANÇA ATÉ 11 ANOS;
* B) ADOLESCENTE 12 ANOS COMPLETO ATÉ 18 ANOS COMPLETO;
* C) JOVEM 19 ANOS COMPLETO MÊS ATÉ 24 ANOS;
* D) ADULTO 25 ANOS  COMPLETO ATÉ 59 ANOS;
* E) IDOSO IDADE IGUAL OU SUPERIOR A 60 ANOS;
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