#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // declaração das variaveis da primeira carta;

    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_percapta1;

    // declaração das variaveis da segunda carta;

    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_percapta2;


    // cadastro da pimeira carta;


    printf("carta1\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01, B04): "); //A letra do estado seguida de um número de 01 a 04 (ex: A01, A02, A03, A04, B01, B02, B03, B04);
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");     
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);


    densidade_populacional1 = populacao1 / area1;

    pib_percapta1 = (pib1 * 1000000000.0f) / populacao1;


    // cadastro da segunda carta;


    printf("carta2\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A01, B04): "); //A letra do estado seguida de um número de 01 a 04 (ex: A01, A02, A03, A04, B01, B02, B03, B04);
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");     
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);


    densidade_populacional2 = populacao2 / area2;

    pib_percapta2 = (pib2 * 1000000000.0f) / populacao2;


    // exibição da primeria carta;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capta %.2f reais\n", pib_percapta1);


    // exibição da segunda carta; 

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capta %.2f reais\n", pib_percapta2);


  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;

} 
