#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //variavel carta 1
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //variavel carta 2
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    //cadastro carta 1
    printf("Digite a letra do seu estado (A-H): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex: A01):");
    scanf("%s", codigo1);

    printf("Digite o nome da sua cidade:" );
    scanf("%[^\n]", nomecidade1);
    
    printf("Digite a população da cidade:");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km:");
    scanf("%f", &area1);

    printf("Digite o pib da cidade(em bilhões de reais):");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turíristicos:");
    scanf("%d", &pontosTuristicos1);

    //cadastro carta 2
    printf("Digite a letra do seu estado (A-H): ");
    scanf("%c", &estado2);

    printf("Digite o código da carta (ex: A01):");
    scanf("%s", codigo2);

    printf("Digite o nome da sua cidade:" );
    scanf("%[^\n]", nomecidade2);
    
    printf("Digite a população da cidade:");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km:");
    scanf("%f", area2);

    printf("Digite o pib da cidade(em bilhões de reais):");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turíristicos:");
    scanf("%d", &pontosTuristicos2);

    //exibição de cartas
    printf("\nCarta 1: \n");
    printf("Estado: c%\n", estado1);
    printf("Código: s%\n ", codigo1);
    printf("Nome da cidade: s%\n", nomecidade1);
    printf("População: d%\n", populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f em bilhões de reais\n ", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2: \n");
    printf("Estado: c%\n", estado2);
    printf("Código: s%\n ", codigo2);
    printf("Nome da cidade: s%\n", nomecidade2);
    printf("População: d%\n", populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %.2f em bilhões de reais\n ", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
