#include <stdio.h>

// Desafio Super Trunfo - Países
// NÍVEL AVENTUREIRO: calcula densidade populacional e PIB per capita.

int main(void) {
    char codigo1[4], codigo2[4];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo: "); scanf("%3s", codigo1);
    printf("Populacao: "); scanf("%d", &populacao1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos turisticos: "); scanf("%d", &pontos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Codigo: "); scanf("%3s", codigo2);
    printf("Populacao: "); scanf("%d", &populacao2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos turisticos: "); scanf("%d", &pontos2);

    float dens1 = (area1 != 0) ? ((float)populacao1 / area1) : 0.0;
    float dens2 = (area2 != 0) ? ((float)populacao2 / area2) : 0.0;
    float pibpc1 = (populacao1 != 0) ? (pib1 / populacao1) : 0.0;
    float pibpc2 = (populacao2 != 0) ? (pib2 / populacao2) : 0.0;

    printf("\n=== Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Densidade populacional: %.4f\n", dens1);
    printf("PIB per capita: %.6f\n", pibpc1);

    printf("\n=== Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Densidade populacional: %.4f\n", dens2);
    printf("PIB per capita: %.6f\n", pibpc2);
    return 0;
}