#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    //Variaveis
    char estado1, estado2, codigo1[5], codigo2[5], cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2, opcao;
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

    printf("\nCarta 2:\n");
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

    // Menu para Comparação de Cartas:

    printf("\n*** Menu de Comparação de Cartas ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("\nEscolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
        if (populacao1 > populacao2)
        {
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %lu \n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu \n", cidade2, populacao2);
            printf("Carta 1 venceu!\n");
        } else if (populacao1 < populacao2)
        {
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %lu \n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu \n", cidade2, populacao2);
            printf("Carta 2 venceu!\n");
        } else 
        {
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %lu \n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu \n", cidade2, populacao2);
            printf("Houve um empate!");
        }
        break;
        case 2:
        if (area1 > area2)
        {
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, area1);
            printf("Carta 2 - %s: %.2f \n", cidade2, area2);
            printf("Carta 1 venceu!\n");
        } else if (area1 < area2)
        {
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, area1);
            printf("Carta 2 - %s: %.2f \n", cidade2, area2);
            printf("Carta 2 venceu!\n");
        } else 
        {
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, area1);
            printf("Carta 2 - %s: %.2f \n", cidade2, area2);
            printf("Houve um empate!");
        }
        break;
        case 3:
        if (pib1 > pib2)
        {
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f \n", cidade2, pib2);
            printf("Carta 1 venceu!\n");
        } else if (pib1 < pib2)
        {
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f \n", cidade2, pib2);
            printf("Carta 2 venceu!\n");
        } else 
        {
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f \n", cidade2, pib2);
            printf("Houve um empate!");
        }
        break;
        case 4:
        if (pontosTuristicos1> pontosTuristicos2)
        {
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s: %d \n", cidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d \n", cidade2, pontosTuristicos2);
            printf("Carta 1 venceu!\n");
        } else if (pontosTuristicos1 < pontosTuristicos2)
        {
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s: %d \n", cidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d \n", cidade2, pontosTuristicos2);
            printf("Carta 2 venceu!\n");
        } else 
        {
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s: %d \n", cidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d \n", cidade2, pontosTuristicos2);
            printf("Houve um empate!");
        }
        break;
        case 5:
        if (densidade1 < densidade2)
        {
            printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f \n", cidade2, densidade2);
            printf("Carta 1 venceu!\n");
        } else if (densidade1 > densidade2)
        {
            printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f \n", cidade2, densidade2);
            printf("Carta 2 venceu!\n");
        } else 
        {
            printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f \n", cidade2, densidade2);
            printf("Houve um empate!");
        }
        break;
        case 6:
        if (pibPerCapita1 > pibPerCapita2)
        {
            printf("\nComparação de cartas (Atributo: PIB Per Capita):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f \n", cidade2, pibPerCapita2);
            printf("Carta 1 venceu!\n");
        } else if (pibPerCapita1 < pibPerCapita2)
        {
            printf("\nComparação de cartas (Atributo: PIB Per Capita):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f \n", cidade2, pibPerCapita2);
            printf("Carta 2 venceu!\n");
        } else 
        {
            printf("\nComparação de cartas (Atributo: PIB Per Capita):\n");
            printf("Carta 1 - %s: %.2f \n", cidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f \n", cidade2, pibPerCapita2);
            printf("Houve um empate!");
        }
        break;
        default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
