/*
*
Programa para calcular informações de 12 produtos:
- Entrada: preço unitário, refrigeração (S/N), categoria (A/L/V).
- Cálculo do custo de estocagem conforme tabela (depende de preço, refrigeração e categoria).
- Imposto: 2% se não preencher requisitos, 4% se categoria A ou refrigeração S.
- Preço final = preço unitário + custo estocagem + imposto.
- Classificação:
    <= 20       → Barato
    20 < x <=100→ Normal
    > 100       → Caro
- Saída final:
    Média dos adicionais (custo + imposto)
    Maior e menor preço final
    Total de impostos
    Quantidade de produtos por classificação
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

    int i = 0;
    float preco, custoEstocagem, imposto, precoFinal;
    char refrig, categoria;

    float somaCustos = 0, somaImpostos = 0;
    float maiorPreco = 0, menorPreco = 999999;
    int qtdBarato = 0, qtdNormal = 0, qtdCaro = 0;

    while (i < 12) {
        printf("Produto %d\n", i + 1);
        printf("Preco unitario: ");
        scanf("%f", &preco);
        printf("Refrigeracao (S/N): ");
        scanf(" %c", &refrig);
        printf("Categoria (A/L/V): ");
        scanf(" %c", &categoria);

        // Determinar custo de estocagem
        if (preco <= 20) {
            if (categoria == 'A') custoEstocagem = 2.0;
            else if (categoria == 'L') custoEstocagem = 3.0;
            else custoEstocagem = 4.0;
        }
        else if (preco > 20 && preco <= 50) {
            if (refrig == 'S') custoEstocagem = 6.0;
            else custoEstocagem = 0.0;
        }
        else {
            if (refrig == 'S') {
                if (categoria == 'A') custoEstocagem = 5.0;
                else if (categoria == 'L') custoEstocagem = 2.0;
                else custoEstocagem = 4.0;
            } else {
                if (categoria == 'A' || categoria == 'V') custoEstocagem = 0.0;
                else custoEstocagem = 1.0;
            }
        }

        if (categoria == 'A' && refrig == 'S')
            imposto = preco * 0.04;
        else
            imposto = preco * 0.02;

        precoFinal = preco + custoEstocagem + imposto;

        if (precoFinal <= 20) {
            qtdBarato++;
            printf("Classificacao: Barato\n");
        } else if (precoFinal > 20 && precoFinal <= 100) {
            qtdNormal++;
            printf("Classificacao: Normal\n");
        } else {
            qtdCaro++;
            printf("Classificacao: Caro\n");
        }

        somaCustos += custoEstocagem;
        somaImpostos += imposto;
        if (precoFinal > maiorPreco) maiorPreco = precoFinal;
        if (precoFinal < menorPreco) menorPreco = precoFinal;

        i++;
    }

    printf("\nMedia valores adicionais: %.2f\n", (somaCustos + somaImpostos) / 12);
    printf("Maior preco final: %.2f\n", maiorPreco);
    printf("Menor preco final: %.2f\n", menorPreco);
    printf("Total dos impostos: %.2f\n", somaImpostos);
    printf("Qtd Barato: %d\n", qtdBarato);
    printf("Qtd Normal: %d\n", qtdNormal);
    printf("Qtd Caro: %d\n", qtdCaro);
}