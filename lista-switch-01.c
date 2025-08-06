/*
 * EXERCICIO 1
 * FAÇA UM PROGRAMA QUE O USUÁRIO DIGITE O MÊS DO NASCIMENTO
 * E O DIA, PROGRAMA DEVE RETORNAR INFORMANDO O SIGNO QUE PERTENCE.
 *
 * Signos e datas:
 * Aquário:     de 20 janeiro a 18 fevereiro
 * Peixes:      de 19 fevereiro a 20 março
 * Áries:       de 21 março a 19 abril
 * Touro:       de 20 abril a 20 maio
 * Gêmeos:      de 21 maio a 21 junho
 * Câncer:      de 22 junho a 22 julho
 * Leão:        de 23 julho a 22 agosto
 * Virgem:      de 23 agosto a 22 setembro
 * Libra:       de 23 setembro a 22 outubro
 * Escorpião:   de 23 outubro a 21 novembro
 * Sagitário:   de 22 novembro a 21 dezembro
 * Capricórnio: de 22 dezembro a 19 janeiro
 * USAR SWITCH, IF E ELSE
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

    int dia, mes;

    printf("Digite o dia do seu nascimento:\n");
    scanf("%d", &dia);
    printf("Digite o mês do seu nascimento (1 a 12):\n");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            if (dia < 1 || dia > 31)
                printf("Dia inválido!\n");
            else if (dia <= 19)
                printf("Seu signo é Capricórnio\n");
            else
                printf("Seu signo é Aquário\n");
            break;

        case 2:
            if (dia < 1 || dia > 29)
                printf("Dia inválido!\n");
            else if (dia <= 18)
                printf("Seu signo é Aquário\n");
            else
                printf("Seu signo é Peixes\n");
            break;

        case 3:
            if (dia < 1 || dia > 31)
                printf("Dia inválido!\n");
            else if (dia <= 20)
                printf("Seu signo é Peixes\n");
            else
                printf("Seu signo é Áries\n");
            break;

        case 4:
            if (dia < 1 || dia > 30)
                printf("Dia inválido!\n");
            else if (dia <= 19)
                printf("Seu signo é Áries\n");
            else
                printf("Seu signo é Touro\n");
            break;

        case 5:
            if (dia < 1 || dia > 31)
                printf("Dia inválido!\n");
            else if (dia <= 20)
                printf("Seu signo é Touro\n");
            else
                printf("Seu signo é Gêmeos\n");
            break;

        case 6:
            if (dia < 1 || dia > 30)
                printf("Dia inválido!\n");
            else if (dia <= 21)
                printf("Seu signo é Gêmeos\n");
            else
                printf("Seu signo é Câncer\n");
            break;

        case 7:
            if (dia < 1 || dia > 31)
                printf("Dia inválido!\n");
            else if (dia <= 22)
                printf("Seu signo é Câncer\n");
            else
                printf("Seu signo é Leão\n");
            break;

        case 8:
            if (dia < 1 || dia > 31)
                printf("Dia inválido!\n");
            else if (dia <= 22)
                printf("Seu signo é Leão\n");
            else
                printf("Seu signo é Virgem\n");
            break;

        case 9:
            if (dia < 1 || dia > 30)
                printf("Dia inválido!\n");
            else if (dia <= 22)
                printf("Seu signo é Virgem\n");
            else
                printf("Seu signo é Libra\n");
            break;

        case 10:
            if (dia < 1 || dia > 31)
                printf("Dia inválido!\n");
            else if (dia <= 22)
                printf("Seu signo é Libra\n");
            else
                printf("Seu signo é Escorpião\n");
            break;

        case 11:
            if (dia < 1 || dia > 30)
                printf("Dia inválido!\n");
            else if (dia <= 21)
                printf("Seu signo é Escorpião\n");
            else
                printf("Seu signo é Sagitário\n");
            break;

        case 12:
            if (dia < 1 || dia > 31)
                printf("Dia inválido!\n");
            else if (dia <= 21)
                printf("Seu signo é Sagitário\n");
            else
                printf("Seu signo é Capricórnio\n");
            break;

        default:
            printf("Dia ou mês inválido!\n");
            break;
    }
}