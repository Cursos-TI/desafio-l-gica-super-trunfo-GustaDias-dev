#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
        //Variaveis
    char pais [20];
    int populacao;
    float area;
    float pib;
    int pturisticos;
    int escolha1;
    //Cadastro
    printf("Digite o Nome do País: \n");
    scanf("%s", &pais);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);
    printf("Digite a Área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos);

    printf("Escolha um atributo: \n");
    printf("1. População.\n");
    printf("2. Àrea.\n");
    printf("3. PIB.\n");
    printf("4. Pontos turísticos.\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
    printf("O jogador 1 escolheu população\n");
    break;
    case 2:
    printf("O jogador 1 escolheu Àrea\n");
    break;
    case 3:
    printf("O jogador 1 escolheu PIb\n");
    break;
    case 4:
    printf("O jogador 1 escolheu Pontos turísticos\n");
    break;
    default:
    printf("Número inválido\n");
    break;
    }


    //carta2
    char pais2 [20];
    int populacao2;
    float area2;
    float pib2;
    int pturisticos2;
    int escolha2;
    //Cadastro
    printf("Digite o Nome do País: \n");
    scanf("%s", &pais2);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos2);

    printf("Escolha um atributo: \n");
    printf("1. População.\n");
    printf("2. Àrea.\n");
    printf("3. PIB.\n");
    printf("4. Pontos turísticos.\n");
    printf("Escolha: ");
    scanf("%d", &escolha2);

    switch (escolha2)
    {
    case 1:
    printf("O jogador 1 escolheu população\n");
    break;
    case 2:
    printf("O jogador 1 escolheu Àrea\n");
    break;
    case 3:
    printf("O jogador 1 escolheu PIb\n");
    break;
    case 4:
    printf("O jogador 1 escolheu Pontos turísticos\n");
    break;
    default:
    printf("Número inválido\n");
    break;
    }

    if (escolha1 > escolha2)
    {
        printf("Jogador 1 Venceu!\n");
    } else {
        printf("Jogador 2 Venceu!\n");
    }
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    
    return 0;
}
