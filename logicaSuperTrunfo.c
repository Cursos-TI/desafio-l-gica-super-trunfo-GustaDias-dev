#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibcap1;
    float superpoder1;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta: ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    densidade1 = (float) (populacao1 / area1);
    pibcap1 = (float) (pib1 / populacao1);
    //superpoder1 = (float) (populacao1 + area1 + pib1 + pontosTuristicos1 + pibcap1 +(1 / densidade1));


    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibcap2;
    float superpoder2;

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    densidade2 = (float) (populacao2 / area2);
    pibcap2 = (float) (pib2 / populacao2);
    //superpoder2 = (float) (populacao2 + area2 + pib2 + pontosTuristicos2 + pibcap2 +(1 / densidade2));
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    /*printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %2.f\n", densidade1);
    printf("PIB per capita: %2.f\n", pibcap1);
    printf("Super Poder: %f\n",superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %2.f\n", densidade2);
    printf("PIB per capita: %2.f\n", pibcap2);
    printf("Super Poder: %f\n", superpoder2);

    //Comparação
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu\n", populacao1 > populacao2);
    printf("Área: Carta %d venceu\n", area1 > area2);
    printf("PIB: Carta %d venceu\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu\n", pibcap1 > pibcap2);
    printf("Super Poder: Carta %d venceu\n", superpoder1 > superpoder2);*/

    printf("Comparação:\n");
    printf("Carta 1 - %s : %d\n",nomeCidade1, populacao1);
    printf("Carta 2 - %s : %d\n",nomeCidade2, populacao2);


    if (populacao1 > populacao2){
        printf("A Carta 1 Venceu!\n");
    } else if (populacao1 == populacao2){
        printf ("Empate \n");
    } else {
        printf("A Carta 2 Venceu! \n");
    }


    return 0;
}