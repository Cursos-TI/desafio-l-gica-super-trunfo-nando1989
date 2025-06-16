#include <stdio.h>

int main() {
    
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;
    
    printf("Carta 1 - %s (%c):\n", nomeCidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.6f\n\n", pibPerCapita1);

    printf("Carta 2 - %s (%c):\n", nomeCidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.6f\n\n", pibPerCapita2);

    
    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s: %.2f bilhões\n", nomeCidade1, pib1);
    printf("Carta 2 - %s: %.2f bilhões\n", nomeCidade2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
