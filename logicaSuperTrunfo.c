#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    //carta1
    char estado;
    char codigo [10];
    char nome [20];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float capita;
    float super;

    //carta2
    char estado2;
    char codigo2 [10];
    char nome2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float capita2;
    float super2;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
    //carta2
    printf("Digite o Estado: \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população: \n");
    scanf("%lu", &populacao);

    printf("Digite a Área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    densidade = (float) (populacao / area);
    capita = (float) (pib / populacao);
    super = (float) (populacao + area + pib + pontos_turisticos + densidade + capita);

    printf("Densidade Populacional: %f pessoas por km²\n", densidade);
    printf("PIB per capita: %f reais\n", capita);
    printf("Super Poder: %f\n", super);

    //carta2
    printf("Digite o Estado: \n");
    scanf("%c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float) (populacao2 / area2);
    capita2 = (float) (pib2 / populacao2);
    super2 = (float) (populacao2 + area2 + pib2 + pontos_turisticos2 + densidade2 + capita2);

    
    printf("Densidade Populacional: %f pessoas por km²\n", densidade2);
    printf("PIB per capita: %f reais\n", capita2);
    printf("Super Poder: %f\n", super2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if (populacao > populacao2) {
        printf("Cidade 1 tem maior população. \n");
    } else {
        printf("Cidade 2 tem maior população. \n");
    }
    if (area > area2){
        printf("Cidade 1 tem maior Área.\n");
    }else {
        printf("Cidade 2 tem maior Área.\n");
    }
    if (pib > area2){
        printf("Cidade 1 tem maior PIB.\n");
    }else {
        printf("Cidade 2 tem maior PIB.\n");
    }
    if (pontos_turisticos > pontos_turisticos2){
        printf("Cidade 1 tem mais pontos turísticos.\n");
    }else {
        printf("Cidade 2 tem mais pontos turísticos.\n");
    }
    if (densidade < densidade2){
        printf("Cidade 1 tem menor densidade.\n");
    }else {
        printf("Cidade 2 tem menor densidade.\n");
    }
    if (capita > capita2){
        printf("Cidade 1 tem maior PIB per capita.\n");
    }else {
        printf("Cidade 2 tem maior PIB per capita.\n");
    }
    if (super > super2){
        printf("A cidade 1 é a vencedora!!!.\n");
    }else {
        printf("A cidade 2 é a vencedora!!!.\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
