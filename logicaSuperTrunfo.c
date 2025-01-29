#include <stdio.h>

int main (){

    //CARTA1

    //Variáveis
    char estado;
    char carta[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pturisticos;
    float densidade_populacional;
    float pib_capita;
    int escolha1,escolha2;
    int resultado;
    int comparacao;

    densidade_populacional = (float) (populacao / area);
    pib_capita = (float) (pib / populacao);
    
    //Cadastro
    printf("Digite o Nome do País: \n");
    scanf("%s", &estado);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);
    printf("Digite a Área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos);
    printf("Densidade Populacional: %f pessoas/km²\n", densidade_populacional);
    printf("PIB per capita: %f reais\n", pib_capita);
    
    //Escolhas
    printf("Escolha dois atributos: \n");
    printf("1. População.\n");
    printf("2. Àrea.\n");
    printf("3. PIB.\n");
    printf("4. Pontos turísticos.\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Escolhas: ");
    scanf("%d e %d", &escolha1, &escolha2);

    //CARTA2

    //Variáveis
    char estado2;
    char carta2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pturisticos2;
    float densidade_populacional2;
    float pib_capita2;
    int escolha3,escolha4;
    int resultado2;

    densidade_populacional2 = (float) (populacao2 / area2);
    pib_capita2 = (float) (pib2 / populacao2);
    
    //Cadastro
    printf("Digite o Nome do País: \n");
    scanf("%s", &estado2);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos2);
    printf("Densidade Populacional: %f pessoas/km²\n", densidade_populacional2);
    printf("PIB per capita: %f reais\n", pib_capita2);
    
    //Escolhas
    printf("Escolha dois atributos: \n");
    printf("1. População.\n");
    printf("2. Àrea.\n");
    printf("3. PIB.\n");
    printf("4. Pontos turísticos.\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Escolhas: ");
    scanf("%d e %d", &escolha3, &escolha4);


    switch (comparacao)
    {
    case 1:
        printf("Jogador 1 escolheu população\n");
        resultado = escolha1 && escolha2 > escolha3 && escolha4 ? 1 : 0;
        break;
    case 2:
        printf("Jogador 1 escolheu área\n");
        resultado = escolha1 && escolha2 > escolha3 && escolha4 ? 1 : 0;
        break;
    case 3:
        printf("Jogador 1 escolheu PIB\n");
        resultado = escolha1 && escolha2 > escolha3 && escolha4 ? 1 : 0;
        break;
    case 4:
        printf("Jogador 1 escolheu Pontos turísticos\n");
        resultado = escolha1 && escolha2 > escolha3 && escolha4 ? 1 : 0;
        break;
    case 5:
        printf("Jogador 1 escolheu Densidade\n");
        resultado = escolha1 && escolha2 < escolha3 && escolha4 ? 1 : 0;
        break;
    case 6:
        printf("Jogador 1 escolheu PIB per capita\n");
        resultado = escolha1 && escolha2 > escolha3 && escolha4 ? 1 : 0;
        break;
    
    default:
        break;
    }
    if (resultado = 1)
    {
        printf("O Jogador 1 venceu!\n");
    } else {
        printf("O Jogador 2 venceu!\n");
    }


}