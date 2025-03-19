#include <stdio.h>
#include <stdio.h>
#include <string.h>
printf (criei o desafio de logica super trunfo);
// Definindo a estrutura para armazenar as informações de uma carta
struct Carta {
    char estado[30];
    char codigo[20];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

// Função para calcular a densidade populacional e o PIB per capita
void calcularDensidadeEPIB(struct Carta* carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

// Função para comparar as cartas baseado em um atributo específico
void compararCartas(struct Carta* carta1, struct Carta* carta2, char atributo) {
    printf("\nComparação de cartas (Atributo: %c):\n", atributo);
    printf("Carta 1 - %s (%s): %d\n", carta1->cidade, carta1->estado, carta1->populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2->cidade, carta2->estado, carta2->populacao);
    
    // Atributo escolhido para comparação
    if (atributo == 'P') { // População
        printf("Resultado: ");
        if (carta1->populacao > carta2->populacao) {
            printf("Carta 1 (%s) venceu!\n", carta1->cidade);
        } else {
            printf("Carta 2 (%s) venceu!\n", carta2->cidade);
        }
    } else if (atributo == 'A') { // Área
        printf("Resultado: ");
        if (carta1->area > carta2->area) {
            printf("Carta 1 (%s) venceu!\n", carta1->cidade);
        } else {
            printf("Carta 2 (%s) venceu!\n", carta2->cidade);
        }
    } else if (atributo == 'I') { // PIB
        printf("Resultado: ");
        if (carta1->pib > carta2->pib) {
            printf("Carta 1 (%s) venceu!\n", carta1->cidade);
        } else {
            printf("Carta 2 (%s) venceu!\n", carta2->cidade);
        }
    } else if (atributo == 'D') { // Densidade Populacional
        printf("Resultado: ");
        if (carta1->densidade_populacional < carta2->densidade_populacional) {
            printf("Carta 1 (%s) venceu!\n", carta1->cidade);
        } else {
            printf("Carta 2 (%s) venceu!\n", carta2->cidade);
        }
    } else if (atributo == 'C') { // PIB per capita
        printf("Resultado: ");
        if (carta1->pib_per_capita > carta2->pib_per_capita) {
            printf("Carta 1 (%s) venceu!\n", carta1->cidade);
        } else {
            printf("Carta 2 (%s) venceu!\n", carta2->cidade);
        }
    }
}

int main() {
    struct Carta carta1, carta2;
    char atributo_comparacao = 'P';  // Atributo escolhido para comparação (P - População, A - Área, I - PIB, D - Densidade, C - PIB per capita)

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    fgets(carta1.estado, 30, stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = 0; // Remover a nova linha do fgets
    printf("Código da carta: ");
    fgets(carta1.codigo, 20, stdin);
    carta1.codigo[strcspn(carta1.codigo, "\n")] = 0; // Remover a nova linha do fgets
    printf("Nome da cidade: ");
    fgets(carta1.cidade, 50, stdin);
    carta1.cidade[strcspn(carta1.cidade, "\n")] = 0; // Remover a nova linha do fgets
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Calcular Densidade Populacional e PIB per capita da Carta 1
    calcularDensidadeEPIB(&carta1);

    // Limpar o buffer do teclado
    getchar();

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    fgets(carta2.estado, 30, stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = 0; // Remover a nova linha do fgets
    printf("Código da carta: ");
    fgets(carta2.codigo, 20, stdin);
    carta2.codigo[strcspn(carta2.codigo, "\n")] = 0; // Remover a nova linha do fgets
    printf("Nome da cidade: ");
    fgets(carta2.cidade, 50, stdin);
    carta2.cidade[strcspn(carta2.cidade, "\n")] = 0; // Remover a nova linha do fgets
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Calcular Densidade Populacional e PIB per capita da Carta 2
    calcularDensidadeEPIB(&carta2);

    // Comparar as duas cartas
    compararCartas(&carta1, &carta2, atributo_comparacao);

    return 0;
}



    
  