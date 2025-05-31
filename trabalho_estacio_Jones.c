#include <stdio.h>

int main() {
    // Carta Super Trunfo 1
    char estado1;
    char codigo_carta1[4];
    char cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turistico1;

    // Carta Super Trunfo 2
    char estado2;
    char codigo_carta2[4];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turistico2;

    // Leitura Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("Cidade: ");
    scanf(" %s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (bi): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turistico1);

    // Leitura Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo_carta2);
    printf("Cidade: ");
    scanf(" %s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (bi): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turistico2);

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bi\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turistico1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turistico2);

    return 0;
}