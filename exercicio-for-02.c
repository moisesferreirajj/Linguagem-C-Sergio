/*
*
EXE 002 – Estatistica da Cidade (Utilize FOR)
Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:
a) código da cidade;
b) número de veículos de passeio;
c) número de acidentes de trânsito com vítimas.
Deseja-se saber:
a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
b) qual é a média de veículos nas cinco cidades juntas;
c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio
*
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    int codigoCidade, veiculosPasseio, acidentesTransito;
    int maiorAcidentes = 0, menorAcidentes = 0;
    int cidadeMaiorAcidentes = 0, cidadeMenorAcidentes = 0;
    int cidadesPoucosVeiculos = 0, totalAcidentesPoucosVeiculos = 0;
    int totalVeiculos = 0;

    for (int i = 1; i <= 5; i++) {
        printf("\n--- Cidade %d ---\n", i);

        printf("Insira o código da cidade: \n");
        scanf("%d", &codigoCidade);

        printf("Insira a quantidade de veículos de passeio: \n");
        scanf("%d", &veiculosPasseio);

        printf("Insira o número de acidentes de trânsito: \n");
        scanf("%d", &acidentesTransito);

        if (i == 1) {
            maiorAcidentes = acidentesTransito;
            menorAcidentes = acidentesTransito;
            cidadeMaiorAcidentes = codigoCidade;
            cidadeMenorAcidentes = codigoCidade;
        }

        if (acidentesTransito > maiorAcidentes) {
            maiorAcidentes = acidentesTransito;
            cidadeMaiorAcidentes = codigoCidade;
        }
        if (acidentesTransito < menorAcidentes) {
            menorAcidentes = acidentesTransito;
            cidadeMenorAcidentes = codigoCidade;
        }

        if (veiculosPasseio < 2000) {
            cidadesPoucosVeiculos++;
            totalAcidentesPoucosVeiculos += acidentesTransito;
        }

        totalVeiculos += veiculosPasseio;
    }

    float mediaVeiculos = (float) totalVeiculos / 5;
    float mediaAcidentesPoucosVeiculos = 0;

    if (cidadesPoucosVeiculos > 0) {
        mediaAcidentesPoucosVeiculos =
            (float) totalAcidentesPoucosVeiculos / cidadesPoucosVeiculos;
    }

    printf("\n===== RESULTADOS =====\n");
    printf("Cidade com MAIOR número de acidentes: %d (%d acidentes)\n",
           cidadeMaiorAcidentes, maiorAcidentes);
    printf("Cidade com MENOR número de acidentes: %d (%d acidentes)\n",
           cidadeMenorAcidentes, menorAcidentes);
    printf("Média de veículos nas 5 cidades: %.0f\n", mediaVeiculos);

    if (cidadesPoucosVeiculos > 0) {
        printf("Média de acidentes em cidades com menos de 2000 veículos: %.0f\n",
               mediaAcidentesPoucosVeiculos);
    } else {
        printf("Não há cidades com menos de 2000 veículos.\n");
    }

}