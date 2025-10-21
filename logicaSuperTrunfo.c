#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    //Variaveis
    char estado1, estado2, codigo1[5], codigo2[5], cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    // Cadastro das Cartas:
    printf("Carta 1:\n");
    printf("Informe o estado (A-H):\n");
    scanf("%c", &estado1);

    printf("Informe o código da carta (ex. A01):\n");
    scanf("%s", &codigo1);

    printf("Informe o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%lu", &populacao1);
    
    printf("Informe a área da cidade em km²:\n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Informe o estado (A-H):\n");
    getchar();
    scanf("%c", &estado2);

    printf("Informe o código da carta (ex. A01):\n");
    scanf("%s", &codigo2);

    printf("Informe o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%lu", &populacao2);
    
    printf("Informe a área da cidade em km²:\n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontosTuristicos2);

    //Calculo Densidade Populacional e PIB Per Capita
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;

    // Comparação de Cartas:
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s: %.2f \n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f \n", cidade2, densidade2);

    if (densidade1 < densidade2){
        printf("A cidade vencedora é %s!\n", cidade1);
    } else {
        printf("A cidade vencedora é %s!\n", cidade2);
    }

    return 0;
}
