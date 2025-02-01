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
    

    densidade_populacional = (float) (populacao / area);
    pib_capita = (float) (pib / populacao);
    
    //Cadastro
    printf("Digite o Estado: \n");
    scanf("%c", &estado);
    printf("Digite o código da carta: \n");
    scanf("%s", &carta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
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
   

    densidade_populacional2 = (float) (populacao2 / area2);
    pib_capita2 = (float) (pib2 / populacao2);
    
    //Cadastro
    printf("Digite o Estado: \n");
    scanf("%c", &estado2);
    printf("Digite o código da carta: \n");
    scanf("%s", &carta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
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


    //COMPARAÇÃO
    if (pib > pib2)
    {
        printf("A Carta 1 é a Vencedora!!!\n");
    } else {
        printf("A carta 2 é a vencedora!!!\n");
    }
    
    

    


}