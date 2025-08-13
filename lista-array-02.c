/*
* EXERCICIO 2 - ARRAY
* Faça um programa que preencha um vetor com os modelos de cinco carros (exemplos de modelos: Fusca, Gol, Vectra etc).
* Carregue outro vetor com o consumo desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
* Calcule e mostre:
* a) O modelo de carro mais econômico;
* b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1.000 km.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("#===================#\n");
    printf("#   MOISES FERREIRA #\n");
    printf("#      TDESN V3     #\n");
    printf("#===================#\n");

    char carros[5][100];
    float consumo[5];
    float percorrer1000[5];
    int maisEconomico = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o modelo do %d° veículo: ", i + 1);
        scanf("%s", carros[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite quantos quilômetros (KM) por litro (L) o carro %s faz: ", carros[i]);
        scanf("%f", &consumo[i]);

        percorrer1000[i] = 1000 / consumo[i];

        if (consumo[i] > consumo[maisEconomico]) {
            maisEconomico = i;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("O veículo %s consome %.2f litro(s) para percorrer 1000 KM\n", carros[i], percorrer1000[i]);
    }

    printf("\nO veículo mais econômico é o %s com consumo de %.2f km/l\n",
           carros[maisEconomico], consumo[maisEconomico]);
}