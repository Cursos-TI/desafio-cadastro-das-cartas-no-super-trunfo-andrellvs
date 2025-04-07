#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída em C

int main() {
    // Declaração de variáveis "carta" nr1
    char estado_da_carta,codigo_da_carta[4],nome_da_cidade[100];  // char (caractere) para armazenar letras e strings
    int populacao, numero_de_pontos_turisticos; // inteiro (int) para armazenar números inteiros
    float area,pib; // ponto flutuante (float) para armazenar números decimais

    // Declaração de variáveis "carta" nr2
    char estado_da_carta2,codigo_da_carta2[4],nome_da_cidade2[100]; // char (caractere) para armazenar letras e strings
    int populacao2, numero_de_pontos_turisticos2; // inteiro (int) para armazenar números inteiros
    float area2,pib2; // ponto flutuante (float) para armazenar números decimais

    // Entrada de dados nr1
    printf("Digite o estado (letra de A a H): \n");
    scanf(" %c", &estado_da_carta); // Lê um caractere (letra) e ignora espaços em branco

    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %s", &codigo_da_carta); // Lê uma string (código da carta) até o espaço ou Enter

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade);  // Lê até o Enter (inclusive espaços)

    printf("Digite a população: \n");
    scanf("%d", &populacao); // Lê um número inteiro (população)

    printf("Digite a área (em km²): \n");
    scanf("%f", &area); // Lê um número decimal (área)
 
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib); // Lê um número decimal (PIB)

    printf("Digite o número de pontos turísticos da Carta 1: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    // Calculo da densidade demográfica
    float densidade_demografica = (float)populacao / area; // Calcula a densidade demográfica (população/área)

    // Exibição do PIB per capita
    float pib_per_capita = pib * 1000000000 / populacao; // Calcula o PIB per capita (PIB/população)


    
    // Entrada de dados nr2
    printf("Digite o estado (letra de A a H): \n");        
    scanf(" %c", &estado_da_carta2); // Lê um caractere (letra) e ignora espaços em branco

    printf("Digite o código da carta (ex: A01): \n");   
    scanf(" %s", &codigo_da_carta2); // Lê uma string (código da carta) até o espaço ou Enter

    printf("Digite o nome da cidade: \n"); 
    scanf(" %[^\n]", nome_da_cidade2); // Lê até o Enter (inclusive espaços)

    printf("Digite a população: \n");
    scanf("%d", &populacao2); // Lê um número inteiro (população)

    printf("Digite a área (em km²): \n"); 
    scanf("%f", &area2); // Lê um número decimal (área)

    printf("Digite o PIB (em bilhões de reais): \n"); 
    scanf("%f", &pib2); // Lê um número decimal (PIB)

    printf("Digite o número de pontos turísticos da Carta 2: \n"); // Lê o número de pontos turísticos
    scanf("%d", &numero_de_pontos_turisticos2); // Lê um número inteiro (número de pontos turísticos)

    // Calculo da densidade demográfica 2
    float densidade_demografica2 = (float)populacao2 / area2; // Calcula a densidade demográfica (população/área)

    // Exibição do PIB per capita 2
    float pib_per_capita2 = pib2 * 1000000000 / populacao2; // Calcula o PIB per capita (PIB/população)
        
    // Exibição dos dados nr1
    printf("CARTA 1:\n"); // Exibe o título da carta 1
    printf("Estado: %c\n", estado_da_carta); // Exibe o estado da carta 1
    printf("Código: %s\n", codigo_da_carta); // Exibe o código da carta 1
    printf("Nome da cidade: %s\n", nome_da_cidade); // Exibe o nome da cidade da carta 1
    printf("População: %d\n", populacao); // Exibe a população da carta 1
    printf("Área: %.2f km²\n", area); // Exibe a área da carta 1
    printf("PIB : %.2f bilhões de reais \n", pib); // Exibe o PIB da carta 1
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos); // Exibe o número de pontos turísticos da carta 1
    printf("A densidade demográfica da cidade %s é: %.2f habitantes por km²\n", nome_da_cidade, densidade_demografica); // Exibe a densidade demográfica formatada com 2 casas decimais
    printf("O PIB per capita da cidade %s é: %.2f reais\n", nome_da_cidade, pib_per_capita); // Exibe o PIB per capita formatado com 2 casas decimais

    
    // Exibição dos dados nr2
    printf("CARTA 2: \n"); // Exibe o título da carta 2
    printf("Estado: %c\n", estado_da_carta2); // Exibe o estado da carta 2
    printf("Código: %s\n", codigo_da_carta2); // Exibe o código da carta 2 
    printf("Nome da cidade: %s\n", nome_da_cidade2); // Exibe o nome da cidade da carta 2
    printf("População: %d \n", populacao2); // Exibe a população da carta 2
    printf("Área: %.2f km²\n", area2); // Exibe a área da carta 2
    printf("PIB : %.2f bilhões de reais\n", pib2); // Exibe o PIB da carta 2
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2); // Exibe o número de pontos turísticos da carta 2  
    printf("A densidade demográfica da cidade %s é: %.2f habitantes por km²\n", nome_da_cidade2, densidade_demografica2); // Exibe a densidade demográfica formatada com 2 casas decimais
    printf("O PIB per capita da cidade %s é: %.2f reais\n", nome_da_cidade2, pib_per_capita2); // Exibe o PIB per capita formatado com 2 casas decimais


    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso

}
// O código acima é um programa em C que coleta e exibe informações sobre duas cartas de cidades, incluindo estado, código, nome da cidade, população, área, PIB e número de pontos turísticos. As entradas são feitas pelo usuário e os dados são exibidos na tela.
// O programa utiliza variáveis do tipo char, int e float para armazenar os dados, e a função scanf para ler as entradas do usuário.
// As informações são exibidas na tela usando a função printf. O programa é estruturado de forma clara e organizada, facilitando a leitura e compreensão do código.
// O código é um exemplo básico de como coletar e exibir dados em C, utilizando variáveis, entrada e saída de dados.