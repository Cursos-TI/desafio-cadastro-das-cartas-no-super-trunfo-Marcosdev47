#include <stdio.h>
#include <string.h>

// Função para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    double pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

   // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    double pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

