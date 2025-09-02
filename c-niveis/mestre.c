#include <stdio.h>

// Desafio Super Trunfo - Países
// NÍVEL MESTRE: compara cartas e calcula Super Poder.

int main(void) {
    char codigo1[4], codigo2[4];
    unsigned long populacao1, populacao2;
    double area1, area2, pib1, pib2;
    int pontos1, pontos2;

    printf("=== Cadastro da Carta 1 ===\n");
    scanf("%3s %lu %lf %lf %d", codigo1, &populacao1, &area1, &pib1, &pontos1);

    printf("=== Cadastro da Carta 2 ===\n");
    scanf("%3s %lu %lf %lf %d", codigo2, &populacao2, &area2, &pib2, &pontos2);

    double dens1 = (area1 != 0) ? ((double)populacao1 / area1) : 0.0;
    double dens2 = (area2 != 0) ? ((double)populacao2 / area2) : 0.0;
    double pibpc1 = (populacao1 != 0) ? (pib1 / populacao1) : 0.0;
    double pibpc2 = (populacao2 != 0) ? (pib2 / populacao2) : 0.0;

    double super1 = populacao1 + area1 + pib1 + pontos1 + ((dens1!=0)?1/dens1:0) + pibpc1;
    double super2 = populacao2 + area2 + pib2 + pontos2 + ((dens2!=0)?1/dens2:0) + pibpc2;

    printf("\nComparacoes (1=Carta1 vence, 0=Carta2 vence)\n");
    printf("Populacao: %d\n", (populacao1 > populacao2));
    printf("Area: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos: %d\n", (pontos1 > pontos2));
    printf("Densidade (menor vence): %d\n", (dens1 < dens2));
    printf("PIB per capita: %d\n", (pibpc1 > pibpc2));
    printf("Super Poder: %d\n", (super1 > super2));
    return 0;
}