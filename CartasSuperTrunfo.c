#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Declaração das variaveis da primeira carta

    char estado1;
    char codigo1[5];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração das variaveis da segunda carta

    char estado2;
    char codigo2[1];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Cadastro da pimeira carta

    printf("carta1\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01, B04): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%[\n]", cidade1); //leia até o enter

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area em km²: ");     
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);


    // cadastro da segunda carta

    printf("carta2\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: A01, B04): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%[\n]", cidade2); //leia até o enter

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km²: ");     
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // exibição das cartas

    printf("\ncarta1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %2.F Bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    

    printf("\ncarta2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %2.F Bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);


// brasilia esta colocada de maneira errada, lembrar de corrigir mais tarde;

// como vou fazer para que a depuracao nao necssite de interassao posterior?

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
