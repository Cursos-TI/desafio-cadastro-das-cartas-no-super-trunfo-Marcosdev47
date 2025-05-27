#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // variaveis para a carta 1

    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTur1;

    // variaveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTur2;

    // Leitura dos dados da carta 1

    printf("Informe os dados da Carta 1:\n");
    
    printf("Estado 1 letra (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código (ex: A01): ");
    scanf("%3s", codigo1);
    getchar(); // Limpa o newline após o código
    
    printf("Nome da Cidade: ");
    scanf("%49[^\n]", nomeCidade1);
    getchar(); // Limpa o newline após o nome
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur1);

    // Leitura dos dados da carta 2

    printf("\nInforme os dados da Carta 2:\n");
    
    printf("Estado 1 letra (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código (ex: B02): ");
    scanf("%3s", codigo2);
    getchar(); // Limpa o newline após o código
    
    printf("Nome da Cidade: ");
    scanf("%49[^\n]", nomeCidade2);
    getchar(); // Limpa o newline após o nome
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur2);

    // Exibição da carta 1

     printf("\nCartas:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTur1);

    // Exibição da Carta 2

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTur2);
    
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
