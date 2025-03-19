#include <stdio.h>

// Estrutura para armazenar os atributos das cartas
typedef struct {
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para exibir o menu de escolha de atributos
int escolherAtributo(int escolhido) {
    int opcao;
    printf("\nEscolha um atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    do {
        printf("Digite a opção: ");
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 5 || opcao == escolhido);
    return opcao;
}

// Função para obter o valor do atributo escolhido
float obterAtributo(Carta c, int atributo) {
    switch (atributo) {
        case 1: return (float)c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return (float)c.pontos_turisticos;
        case 5: return c.densidade_demografica;
        default: return 0;
    }
}

// Função para comparar dois atributos e exibir o vencedor
void compararAtributo(Carta c1, Carta c2, int atributo, int inverso) {
    float v1 = obterAtributo(c1, atributo);
    float v2 = obterAtributo(c2, atributo);
    int resultado = inverso ? (v1 < v2) : (v1 > v2);
    printf("%s: %s venceu (%d)\n", 
           (atributo == 1) ? "População" :
           (atributo == 2) ? "Área" :
           (atributo == 3) ? "PIB" :
           (atributo == 4) ? "Pontos Turísticos" :
           "Densidade Demográfica", 
           resultado ? c1.nome : c2.nome, resultado);
}

int main() {
    Carta carta1, carta2;
    int atributo1, atributo2;

    // Entrada de dados
    printf("===== Cadastro das Cartas =====\n");
    printf("Nome da Cidade:");
    scanf(" %[^\n]", carta1.nome);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (trilhões USD): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    
    printf("\nNome da segunda cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (trilhões USD): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculo da densidade demográfica
    carta1.densidade_demografica = carta1.area ? (float)carta1.populacao / carta1.area : 0;
    carta2.densidade_demografica = carta2.area ? (float)carta2.populacao / carta2.area : 0;

    // Escolha dos atributos
    atributo1 = escolherAtributo(0);
    atributo2 = escolherAtributo(atributo1);

    // Comparação dos atributos
    printf("\n===== Comparação de Cartas =====\n");
    compararAtributo(carta1, carta2, atributo1, atributo1 == 5);
    compararAtributo(carta1, carta2, atributo2, atributo2 == 5);

    // Soma dos valores dos atributos escolhidos
    float soma1 = obterAtributo(carta1, atributo1) + obterAtributo(carta1, atributo2);
    float soma2 = obterAtributo(carta2, atributo1) + obterAtributo(carta2, atributo2);

    // Exibição do resultado final
    printf("\nSoma dos atributos:\n%s: %.2f\n%s: %.2f\n", carta1.nome, soma1, carta2.nome, soma2);
    printf("\nResultado Final: %s\n", (soma1 > soma2) ? carta1.nome : (soma1 < soma2) ? carta2.nome : "Empate!");

    return 0;
}