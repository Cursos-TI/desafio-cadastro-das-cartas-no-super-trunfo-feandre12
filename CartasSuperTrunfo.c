#include <stdio.h>

// Desafio: nível novato
// Criando as Cartas do Super Trunfo
// Por: Felipe André de Freitas

int main() {
    // Variáveis das Cartas do Super Trunfo
    char carta1_estado[2], carta2_estado[2];
    char carta1_codigo[4], carta2_codigo[4];
    char carta1_cidade[30], carta2_cidade[30];
    int carta1_populacao, carta2_populacao;
    int carta1_pontosTuristicos, carta2_pontosTuristicos;
    float carta1_area, carta2_area;
    float carta1_pib, carta2_pib;

    // Cadastrando as Cartas do Super Trunfo
    // Carta 1
    printf("Digite uma letra do estado da Carta 1: ");
    scanf("%s", carta1_estado);
    printf("Digite dois números para o código da Carta 1: ");
    scanf("%s", carta1_codigo);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", carta1_cidade);
    printf("Digite a população da Carta 1: ");
    scanf("%d", &carta1_populacao);
    printf("Digite a área(km²) da Carta 1: ");
    scanf("%f", &carta1_area);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &carta1_pib);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &carta1_pontosTuristicos);

    // Cadastrando as Cartas do Super Trunfo
    // Carta 2
    printf("Digite uma letra do estado da Carta 1: ");
    scanf("%s", carta2_estado);
    printf("Digite dois números para o código da Carta 1: ");
    scanf("%s", carta2_codigo);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", carta2_cidade);
    printf("Digite a população da Carta 2: ");
    scanf("%d", &carta2_populacao);
    printf("Digite a área(km²) da Carta 2: ");
    scanf("%f", &carta2_area);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &carta2_pib);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &carta2_pontosTuristicos);

    // Impressão das Cartas do Super Trunfo
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1_estado);
    printf("Código: %s%s\n", carta1_estado, carta1_codigo);
    printf("Nome da Cidade: %s\n", carta1_cidade);
    printf("População: %d\n", carta1_populacao);
    printf("Área: %f km²\n", carta1_area);
    printf("PIB: %f bilhões de reais\n", carta1_pib);
    printf("Número de Pontos Turísticos: %d\n", carta1_pontosTuristicos);

    // Impressão das Cartas do Super Trunfo
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2_estado);
    printf("Código: %s%s\n", carta2_estado, carta2_codigo);
    printf("Nome da Cidade: %s\n", carta2_cidade);
    printf("População: %d\n", carta2_populacao);
    printf("Área: %f km²\n", carta2_area);
    printf("PIB: %f bilhões de reais\n", carta2_pib);
    printf("Número de Pontos Turísticos: %d\n", carta2_pontosTuristicos);

    return 0;
}