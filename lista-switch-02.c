/*
 * EXERCICIO 2
 * FAÇA UM PROGRAMA QUE APRESENTE O MENU A SEGUIR, PERMITA O USUÁRIO
 * ESCOLHER A OPÇÃO DESEJADA, RECEBA OS DADOS NECESSÁRIOS PARA
 * EXECUTAR A OPERAÇÃO E MOSTRE O RESULTADO. VERIFIQUE A POSSIBILIDADE
 * DE OPÇÃO INVÁLIDA E NÃO SE PREOCUPE COM RESTRIÇÕES COMO SALÁRIO NEGATIVO.
 *
 * MENU DE OPÇÕES:
 * 1 - IMPOSTO
 * 2 - NOVO SALÁRIO
 * 3 - CLASSIFICAÇÃO
 * DIGITE A OPÇÃO DESEJADA:
 *
 *============================================================================
 *
 * NA OPÇÃO 1 'IMPOSTO':
 * RECEBER O SALÁRIO DE UM FUNCIONÁRIO, CALCULAR E MOSTRAR O VALOR DO IMPOSTO
 * USANDO AS REGRAS A SEGUIR:
 *
 * SALARIO | PERCENTUAL DO IMPOSTO
 * MENOR QUE R$ 500,00 | 5%
 * DE R$ 500,00 (INCLUSIVE) A R$ 850,00 (INCLUSIVE) | 10%
 * ACIMA DE R$ 850,00 | 15%
 *
 *============================================================================
 *
 * NA OPÇÃO 2 'NOVO SALÁRIO':
 * RECEBER O SALÁRIO DE UM FUNCIONÁRIO, CALCULAR E MOSTRAR O VALOR DO
 * NOVO SALÁRIO, USANDO AS REGRAS A SEGUIR:
 *
 * SALÁRIO | AUMENTO
 * MAIOR QUE R$ 1.500,00 | R$ 25,00
 * DE R$ 750,00 (INCLUSIVE) A R$ 1.500,00 (INCLUSIVE) | R$ 50,00
 * DE R$ 450,00 (INCLUSIVE) A R$ 750,00 (INCLUSIVE) | R$ 75,00
 * MENOR QUE R$ 450,00 | R$ 100,00
 *
 *============================================================================
 *
 * NA OPÇÃO 3 'CLASSIFICAÇÃO':
 * RECEBER O SALÁRIO DE UM FUNCIONÁRIO E
 * MOSTRAR SUA CLASSIFICAÇÃO USANDO A TABELA A SEGUIR:
 *
 * SALÁRIO | CLASSIFICAÇÃO
 * ATÉ R$ 700,00 (INCLUSIVE) | MAL REMUNERADO
 * MAIORES QUE R$ 700,00 (INCLUSIVE) | BEM REMUNERADO
 *
 *============================================================================
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

    int opcao;
    float salario;

    printf("Insira o salário do funcionário:\n");
    scanf("%f", &salario);

    printf("Muito bem! Agora selecione uma das opções:\n");
    printf("#=====================\n");
    printf("# MENU DE OPÇÕES:\n");
    printf("# [1] - IMPOSTO\n");
    printf("# [2] - NOVO SALÁRIO\n");
    printf("# [3] - CLASSIFICAÇÃO\n");
    printf("#=====================\n");
    printf("Digite a opção desejada:\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            if (salario < 500.00) {
                printf("Imposto: R$ %.2f\n", salario * 0.05);
            } else if (salario <= 850.00) {
                printf("Imposto: R$ %.2f\n", salario * 0.10);
            } else {
                printf("Imposto: R$ %.2f\n", salario * 0.15);
            }
            break;

        case 2:
            if (salario > 1500.00) {
                salario += 25.00;
            } else if (salario >= 750.00) {
                salario += 50.00;
            } else if (salario >= 450.00) {
                salario += 75.00;
            } else {
                salario += 100.00;
            }
            printf("Novo salário: R$ %.2f\n", salario);
            break;

        case 3:
            if (salario <= 700.00) {
                printf("Classificação: Mal remunerado\n");
            } else {
                printf("Classificação: Bem remunerado\n");
            }
            break;

        default:
            printf("Opção inválida! Encerrando o programa.\n");
            break;
    }
}