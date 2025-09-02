#include <stdio.h>

// Desafio Super Trunfo - Países
// NÍVEL NOVATO: leitura e exibição de DUAS cartas (sem laços/condicionais).

int main(void) {
    char codigo1[4], codigo2[4];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo (ex: A01): "); scanf("%3s", codigo1);
    printf("Populacao: "); scanf("%d", &populacao1);
    printf("Area (km2): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos turisticos: "); scanf("%d", &pontos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Codigo (ex: B02): "); scanf("%3s", codigo2);
    printf("Populacao: "); scanf("%d", &populacao2);
    printf("Area (km2): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos turisticos: "); scanf("%d", &pontos2);

    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    return 0;
}