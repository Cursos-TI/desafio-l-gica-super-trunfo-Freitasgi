#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    //Variaveis
    unsigned long int populacao1 = 38000, populacao2 = 370000;
    int pontosTuristicos1 = 30, pontosTuristicos2 = 25;
    int opcao1, opcao2, resultado1, resultado2;
    float area1 = 238, area2 = 920, pib1 = 2500000000, pib2 = 10000000000;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    //Calculo Densidade Populacional e PIB Per Capita
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;

    //Inicialização do jogo
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("\nA seguir, veja as informações das cartas para realizar a comparação dos atributos.\n");

    printf("\nCarta 1:\n");
    printf("Código: A01\n");
    printf("Nome da Cidade: Gramado\n");
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Demográfica: %.2f\n", densidade1);
    printf("PIB Per Capita: %.2f\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Código: B02\n");
    printf("Nome da Cidade: Caruaru\n");
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Demográfica: %.2f\n", densidade2);
    printf("PIB Per Capita: %.2f\n", pibPerCapita2);

    //Menu para Comparação de Cartas
    printf("\nEscolha o primeiro atributo: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("\nEscolha uma opção: \n");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        printf("\nVocê escolheu a opção População!\n");
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("Carta 1 - Gramado: %lu\n", populacao1);
        printf("Carta 2 - Caruaru: %lu\n", populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("\nVocê escolheu a opção Área!\n");
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - Gramado: %.2f km²\n", area1);
        printf("Carta 2 - Caruaru: %.2f km²\n", area2);
        resultado1 = area1 > area2? 1 : 0;
        break;
    case 3:
        printf("\nVocê escolheu a opção PIB!\n");
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - Gramado: %.2f\n", pib1);
        printf("Carta 2 - Caruaru: %.2f\n", pib2);
        resultado1 = pib1> pib2 ? 1 : 0; 
        break;
    case 4:
        printf("\nVocê escolheu a opção Pontos Turísticos!\n");
        printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
        printf("Carta 1 - Gramado: %d\n", pontosTuristicos1);
        printf("Carta 2 - Caruaru: %d\n", pontosTuristicos2);
        resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0; 
        break;
    case 5:
        printf("\nVocê escolheu a opção Densidade Demográfica!\n");
        printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
        printf("Carta 1 - Gramado: %.2f\n", densidade1);
        printf("Carta 2 - Caruaru: %.2f\n", densidade2);
        resultado1 = densidade1 < densidade2 ? 1 : 0; 
        break;
    case 6:
        printf("\nVocê escolheu a opção PIB Per Capita!\n");
        printf("\nComparação de cartas (Atributo: PIB Per Capita):\n");
        printf("Carta 1 - Gramado: %.2f\n", pibPerCapita1);
        printf("Carta 2 - Caruaru: %.2f\n", pibPerCapita2);
        resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0; 
        break;
    default:
        printf("\nOpção inválida!\n");
        break;
    }

    printf("\nEscolha o segundo atributo: \n");
    printf("ATENÇÃO: Você deve escolher um atributo diferente do primeiro!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("\nEscolha uma opção: \n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("\nVocê escolheu o mesmo atributo, reinicie o jogo!\n");
        return 0;
    } else {
        switch (opcao2)
    {
    case 1:
        printf("\nVocê escolheu a opção População!\n");
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("Carta 1 - Gramado: %lu\n", populacao1);
        printf("Carta 2 - Caruaru: %lu\n", populacao2);
        resultado2 = populacao1 > populacao2 ? 1 : 0; 
        break;
    case 2:
        printf("\nVocê escolheu a opção Área!\n");
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - Gramado: %.2f km²\n", area1);
        printf("Carta 2 - Caruaru: %.2f km²\n", area2);
        resultado2 = area1 > area2? 1 : 0; 
        break;
    case 3:
        printf("\nVocê escolheu a opção PIB!\n");
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - Gramado: %.2f\n", pib1);
        printf("Carta 2 - Caruaru: %.2f\n", pib2);
        resultado2 = pib1> pib2 ? 1 : 0; 
        break;
    case 4:
        printf("\nVocê escolheu a opção Pontos Turísticos!\n");
        printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
        printf("Carta 1 - Gramado: %d\n", pontosTuristicos1);
        printf("Carta 2 - Caruaru: %d\n", pontosTuristicos2);
        resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0; 
        break;
    case 5:
        printf("\nVocê escolheu a opção Densidade Demográfica!\n");
        printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
        printf("Carta 1 - Gramado: %.2f\n", densidade1);
        printf("Carta 2 - Caruaru: %.2f\n", densidade2);
        resultado2 = densidade1 < densidade2 ? 1 : 0; 
        break;
    case 6:
        printf("\nVocê escolheu a opção PIB Per Capita!\n");
        printf("\nComparação de cartas (Atributo: PIB Per Capita):\n");
        printf("Carta 1 - Gramado: %.2f\n", pibPerCapita1);
        printf("Carta 2 - Caruaru: %.2f\n", pibPerCapita2);
        resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0; 
        break;
    default:
        printf("\nOpção inválida!\n");
        break;
    }
    }

    //Comparação das cartas
    printf("\nResultado da Comparação dos Atributos:\n");

    if ((resultado1 == 1) && (resultado2 == 1))
    {
        printf("A Carta 1 venceu as duas comparações!\n");
    } else if (resultado1 != resultado2) 
    { printf ("Houve um empate entre as cartas!\n");
    } else {
        printf("A Carta 2 venceu as duas comparações!\n");
    }

    //Soma dos atributos
    float soma1 = 0, soma2 = 0;

    switch (opcao1)
    {
    case 1:
        soma1 += populacao1;
        soma2 += populacao2; 
        break;
    case 2:
        soma1 += area1;
        soma2 += area2; 
        break;
    case 3:
        soma1 += pib1;
        soma2 += pib2; 
        break;
    case 4:
        soma1 += pontosTuristicos1;
        soma2 += pontosTuristicos2; 
        break;
    case 5:
        soma1 += densidade1;
        soma2 += densidade2; 
        break;
    case 6:
        soma1 += pibPerCapita1;
        soma2 += pibPerCapita2; 
        break;
    }

    switch (opcao2)
    {
    case 1:
        soma1 += populacao1;
        soma2 += populacao2; 
        break;
    case 2:
        soma1 += area1;
        soma2 += area2; 
        break;
    case 3:
        soma1 += pib1;
        soma2 += pib2; 
        break;
    case 4:
        soma1 += pontosTuristicos1;
        soma2 += pontosTuristicos2; 
        break;
    case 5:
        soma1 += densidade1;
        soma2 += densidade2; 
        break;
    case 6:
        soma1 += pibPerCapita1;
        soma2 += pibPerCapita2; 
        break;
    }
    
    printf("\nComparação de cartas: Soma dos Atributos\n");
    printf("Soma dos atributos da Carta 1: %.2f\n", soma1);
    printf("Soma dos atributos da Carta 2: %.2f\n", soma2);

    if (soma1 > soma2) 
    {
        printf("\nA Carta 1 venceu!\n");
    } else if (soma1 < soma2) 
    {
        printf("\nA Carta 2 venceu!\n");
    } else
    {
        printf("\nHouve um empate!\n");
    }

    return 0;
}
