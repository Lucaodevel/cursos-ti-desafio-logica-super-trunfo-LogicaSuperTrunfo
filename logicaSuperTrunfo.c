#include <stdio.h>

int main(){

int escolhaJogador;

     //Declaração das variaveis da primeira carta.
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

    //Entrada de dados primeira carta.
    printf(".##' Carta 1 '##.\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("Digite a População da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //Calculo da primeira carta.
    if (area1 !=0){
        densidade1 = (float) populacao1 / area1;
    } else {
        densidade1 = 0;
    }
    if (populacao1 !=0){
        pibPerCapita1 = pib1 / populacao1;
    } else {
        pibPerCapita1 = 0;
    }
    
    //Entrada de dados segunda carta.
    printf("\n.##' Carta 2 '##.\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("Digite a População da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    //Calculo da segunda carta.
    if (area2 !=0){
        densidade1 = (float) populacao2 / area2;
    } else {
        densidade2 = 0;
    }
    if (populacao2 !=0){
        pibPerCapita2 = pib2 / populacao2;
    } else {
        pibPerCapita2 = 0;
    }

    //Calculo de super poder.(soma de tudo)
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 - densidade1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 - densidade2;


    //Menus interativos para o usuário escolher qual atributo quer comparar.
    printf("Escolha qual atributo deseja comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Super Poder\n");
    scanf("%d", &escolhaJogador);

    // #################### EXIBIÇÃO ######################
    printf("\n.###' RESULTADO '###.\n");

    switch(escolhaJogador)
    {
    case 1: //População
    printf("População: \n");
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);

    if(populacao1 > populacao2){
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    } else if(populacao1 < populacao2){
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 2: //Area
    printf("\nÁrea: ");
    printf("\nCarta 1 - %s: %f\n", cidade1, area1);
    printf("Carta 2 - %s: %f\n", cidade2, area2);

    if(area1 > area2){
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    } else if(area2 > area1){
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else {
    printf("Resultado: Empate!\n");
    }
    break;
    
    case 3: //PIB
    printf("\nPIB: ");
    printf("\nCarta 1 - %s : %.2f\n", cidade1, pib1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, pib2);

    if(pib1 > pib2){
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    } else if(pib2 > pib1){
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 4: //Pontos Turisticos.
    printf("Pontos Turisticos:\n");
    printf("Carta 1 - %s: %d\n", cidade1, pontosTuristicos1);
    printf("Carta 2 - %s: %d\n", cidade2, pontosTuristicos2);

    if(pontosTuristicos1 > pontosTuristicos2){
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    } else if(pontosTuristicos1 < pontosTuristicos2){       
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 5: //Super Poder
    printf("Super Poder:\n");
    printf("Carta 1 - %s: %d\n", cidade1, superPoder1);
    printf("Carta 2 - %s: %d\n", cidade2, superPoder2);

    if(superPoder1 > superPoder2){
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    } else if(superPoder1 < superPoder2){       
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else {
    printf("Resultado: Empate!\n");
    }
    break;
    
    default:
    printf("Você escolheu uma opção invalida, deve-se escolher de 1 a 5.\n");
}
    return 0;
    }
