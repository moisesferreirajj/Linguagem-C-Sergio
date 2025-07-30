/*
 * EXERCICIO POLEGADAS
 * Sabe-se que: pé = 12 polegadas, 1 jarda = 3 pés, 1 milha = 1760 jardas.
 * Faça um programa que receba uma medida em pés,
 * faça as conversões a seguir e mostre os resultados.
 */

#include <stdio.h>

int main () {
    // VARIÁVEIS DEFINIDAS
    float pes, polegadas, jardas, milhas;

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    printf("\nDigite o valor em pes: \n");
    scanf("%f", &pes);

    // CONVERSÕES PADRÕES:
    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;

    // RESULTADOS DA CONVERSÃO:
    printf("Valor em pes: %.2f", pes);
    printf("\nEm polegadas: %.2f", polegadas);
    printf("\nEm jardas: %.2f", jardas);
    printf("\nEm milhas: %.6f\n", milhas);
    return 0;
}