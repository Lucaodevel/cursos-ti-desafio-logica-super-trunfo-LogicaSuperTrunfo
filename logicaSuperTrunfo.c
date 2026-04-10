#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    //Declaração das variaveis da segunda carta.
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    
    // Cadastro das Cartas:
    
    printf("### Carta 1 ###\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("Digite a polulação da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //Calculo da primeira carta. (Densidade e PIB)
    if (area1 !=0){
        densidade1 = populacao1 / area1;
    } else {
        densidade1 = 0;
    }
    if (populacao1 !=0){
        pibPerCapita1 = pib1 / populacao1;
    } else {
        pibPerCapita1 = 0;
    }
    
    //Cadastro dos dados da segunda carta.
    printf("\n=== Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("Digite a polulação da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    //Calculo da segunda carta. (Densidade e PIB)
    if (area2 !=0){
        densidade2 = populacao2 / area2;
    } else {
        densidade2 = 0;
    }
    if (populacao2 !=0){
        pibPerCapita2 = pib2 / populacao2;
    } else{
        pibPerCapita2 = 0;
    }

    // Comparação de Cartas:

    // Comparação da População:
    if (populacao1 > populacao2){
        printf("A primeira cidade tem a maior população!\n");
    } else {
        printf("A segunda cidade tem a maior população!\n");
    }
    // Comparação da Area:
    if (area1 > area2){
        printf("A primeira cidade tem a maior Area (km²)!\n");
    } else {
        printf("A segunda cidade tem a maior Area (km²)!\n");
    }
    //Comparação do PIB:
    if (pib1 > pib2){
        printf("A primeira cidade tem o maior PIB!\n");
    } else {
        printf("A segunda cidade tem o maior PIB!\n");
    }
    
    //Comparação dos Pontos Turisticos?:
    if (pontosTuristicos1 > pontosTuristicos2){
        printf("A primeira cidade tem mais pontos turisticos!\n");
    } else {
        printf("A segunda cidade tem mais pontos turisticos!\n");
    }

    // Comparação do PIB Per Capita:
    if (pibPerCapita1 > pibPerCapita2){
        printf("A primeira cidade tem o maior PIBPERCAPITA!\n");
    } else {
        printf("A segunda cidade tem o maior PIBPERCAPITA!\n");
    }
    
    //Comparação da Densidade: (menor ganha)
    if (densidade2 > densidade1){
        printf("A primeira cidade tem a menor densidade populacional!\n");
    } else {
        printf("A segunda cidade tem a maior densidade populacional! \n");
    }

    // Comparação de Super Poder.
    if (superPoder1 > superPoder2){
        printf("A primeira cidade tem o maior Super Poder e foi a Vencedora!\n");
    } else {
        printf("A segunda cidade tem o maior Super Poder e foi a Vencedora!\n");
    }
    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
