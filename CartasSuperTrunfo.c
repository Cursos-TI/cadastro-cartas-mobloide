#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    // carta 1 - Brasília;

    char estado1;
    char codigo1[2];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // carta 2 - Salvador;

    char estado2;
    char codigo2[1];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // arredondei os números para melhor entendimento;

    //  estado1

    printf("carta1\n");
    printf("estado1: A\n");
    scanf(" %c", &estado1);

    printf("codigo da carta: A01\n");
    scanf("%s", codigo1);

    printf("digite o nome da cidade: Brasília\n");
    scanf("%[\n]", cidade1); //leia até o enter

    printf("digite a populacao: 2900000\n");
    scanf("%d", &populacao1);

    printf("digite a area em km: 5760\n");     
    scanf("%f", &area1);
    
    printf("digite o pib: 265.847\n");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turisticos: 40\n");
    scanf("%d", &pontosturisticos1);


    // estado2

    printf("carta2\n");
    printf("estado2: B\n");
    scanf(" %c", &estado2);

    printf("codigo da carta: B04\n");
    scanf("%s", codigo2);

    printf("digite o nome da cidade: Salvador\n");
    scanf("%[\n]", cidade2); //leia até o enter

    printf("digite a populacao: 2560000\n");
    scanf("%d", &populacao2);

    printf("digite a area em km: 693\n");     
    scanf("%f", &area2);
    
    printf("digite o pib: 62,9\n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos: 78\n");
    scanf("%d", &pontosturisticos2);


// irei tentar finalizar agora o esqueleto

printf("\n Carta 1: \n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", Brasília);
printf("População: %d habitantes\n", pontosturisticos2);



// brasilia esta colocada de maneira errada, lembrar de corrigir mais tarde;

// como vou fazer para que a depuracao nao necssite de interassao posterior?

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
