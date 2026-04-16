#include <stdio.h>
#include <string.h>

int main() {

    // --- VARIAVEIS DE COMPARAÇÃO ---
    int escolha1, escolha2;
    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;
    char nomeAtributo1[20], nomeAtributo2[20];

    // --- VARIAVEIS CARTA 1 ---
    char estado1, codigo1[4], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // --- VARIAVEIS CARTA 2 ---
    char estado2, codigo2[4], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // --- ENTRADA DE DADOS (CARTA 1) ---
    printf(".##' Carta 1 '##.\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- CALCULO DENSIDADE ---
    densidade1 = (area1 != 0) ? (float)populacao1 / area1 : 0;

    // --- ENTRADA DE DADOS (CARTA 2) ---
    printf("\n.##' Carta 2 '##.\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- CALCULO DENSIDADE ---
    densidade2 = (area2 != 0) ? (float)populacao2 / area2 : 0;

    // --- MENU PARA A ESCOLHA DO PRIMEIRO ATRIBUTO ---
    printf("\n.###' ESCOLHA O PRIMEIRO ATRIBUTO '###.\n");
    printf("1. Populacao | 2. Area | 3. PIB | 4. Pontos Turisticos | 5. Densidade\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    // --- ATRIBUIÇÃO DO PRIMEIRO VALOR ---
    switch(escolha1){
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; strcpy(nomeAtributo1, "Populacao"); break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; strcpy(nomeAtributo1, "Area"); break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; strcpy(nomeAtributo1, "PIB"); break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; strcpy(nomeAtributo1, "Pontos Turisticos"); break;
        case 5: valor1_c1 = -densidade1; valor1_c2 = -densidade2; strcpy(nomeAtributo1, "Densidade"); break;
        default: printf("Opção invalida!"); return 0;
    }

    // --- MENU PARA ESCOLHA DO SEGUNDO ATRIBUTO - EXCLUI A PRIMEIRA OPÇÃO ---
    for(int i = 1; i <= 5; i++) {
    if(i == escolha1) continue; // --- PULA A OPÇÃO JÁ ESCOLHIDA ---
        switch(i) {
            case 1: printf("1. População\n"); break;
            case 2: printf("2. Área\n"); break;
            case 3: printf("3. PIB\n"); break;
            case 4: printf("4. Pontos Turísticos\n"); break;
            case 5: printf("5. Densidade\n"); break;
        }
    }
    
    printf("Escolha o segundo atributo: ");
    scanf("%d", &escolha2);

    if (escolha2 == escolha1) {
        printf("Erro: Voce não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // --- ATRIBUIÇÃO DO SEGUNDO VALOR ---
    switch(escolha2){
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; strcpy(nomeAtributo2, "Populacao"); break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; strcpy(nomeAtributo2, "Area"); break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; strcpy(nomeAtributo2, "PIB"); break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; strcpy(nomeAtributo2, "Pontos Turisticos"); break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; strcpy(nomeAtributo2, "Densidade"); break;
        default: printf("Opcao invalida!"); return 0;
    }

    // --- LÓGICA DE SOMA COM TRATAMENTO PARA DENSIDADE ---
    float somaC1 = 0, somaC2 = 0;

    // --- ATRIBUTO 1 ---
    if(escolha1 == 5) {
        somaC1 += (1000 / (valor1_c1 + 0.1)); // --- INVERSÃO PARA MENOR VENCE ---
        somaC2 += (1000 / (valor1_c2 + 0.1));
    } else {
        somaC1 += valor1_c1;
        somaC2 += valor1_c2;
    }

    // --- ATRIBUTO 2 ---
    if(escolha2 == 5) {
        somaC1 += (1000 / (valor2_c1 + 0.1));
        somaC2 += (1000 / (valor2_c2 + 0.1));
    } else {
        somaC1 += valor2_c1;
        somaC2 += valor2_c2;
    }

    // --- EXIBIÇÃO DO RESULTADO ---
    printf("\n========================================");
    printf("\n        RESULTADO DO DUELO              ");
    printf("\n========================================\n");
    printf("%s VS %s\n", cidade1, cidade2);
    printf("\nAtributo 1 (%s):\n", nomeAtributo1);
    printf(" - %s: %.2f\n", cidade1, valor1_c1);
    printf(" - %s: %.2f\n", cidade2, valor1_c2);
    
    printf("\nAtributo 2 (%s):\n", nomeAtributo2);
    printf(" - %s: %.2f\n", cidade1, valor2_c1);
    printf(" - %s: %.2f\n", cidade2, valor2_c2);

    printf("\n----------------------------------------\n");
    printf("Soma Final (Pontuacao de Comparacao):\n");
    printf("%s: %.2f\n", cidade1, somaC1);
    printf("%s: %.2f\n", cidade2, somaC2);
    printf("----------------------------------------\n");

    if(somaC1 > somaC2) {
        printf("VENCEDOR: %s!\n", cidade1);
    } else if (somaC2 > somaC1) {
        printf("VENCEDOR: %s!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}