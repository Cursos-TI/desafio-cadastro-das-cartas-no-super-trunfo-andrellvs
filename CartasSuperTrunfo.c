#include <stdio.h>

int main() {
    // Declaração de variáveis nr1
    
    char estado_da_carta,codigo_da_carta[4],nome_da_cidade[100]; 
    int populacao, numero_de_pontos_turisticos;
    float area,pib;

    // Declaração de variáveis nr2
    char estado_da_carta2,codigo_da_carta2[4],nome_da_cidade2[100]; 
    int populacao2, numero_de_pontos_turisticos2;
    float area2,pib2;

    // Entrada de dados nr1
    printf("Digite o estado (letra de A a H): \n");
    scanf(" %c", &estado_da_carta);

    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %s", &codigo_da_carta);

    printf("DDigite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade);  // Lê até o Enter (inclusive espaços)

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area);
 
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da Carta 1: \n");
    scanf("%d", &numero_de_pontos_turisticos);
    
    // Entrada de dados nr2
    printf("Digite o estado (letra de A a H): \n");        
    scanf(" %c", &estado_da_carta2);

    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %s", &codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade2);  // Lê até o Enter (inclusive espaços)

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    
    // Exibição dos dados nr1
    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado_da_carta);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB : %.2f bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos);
    
    // Exibição dos dados nr2
    printf("CARTA 2: \n");
    printf("Estado: %c\n", estado_da_carta2);
    printf("Código: %s\n", codigo_da_carta2);   
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB : %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);

    return 0;

}
// Fim do código
// O código acima é um exemplo de um programa em C que coleta e exibe informações sobre duas cartas de cidades,
// incluindo estado, código, nome da cidade, população, área, PIB e número de pontos turísticos. 
//As entradas são feitas pelo usuário e os dados são exibidos na tela após a coleta.

