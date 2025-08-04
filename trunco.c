#include <stdio.h>

int main(){
    char pais1[50], pais2[50];
    int ponto_turistico1, ponto_turistico2, escolha;
    float area1, area2, pib1, pib2,densidade_populacional_cidade_1, densidade_populacional_cidade_2;
    unsigned long int populacao1, populacao2;



// CARTA 1
    printf("--------------------------CARTA 1------------------------\n\n");
    printf("CARTA 1: Digite o nome do País: ");
    fgets(pais1, 50, stdin);
    pais1[strcspn(pais1, "\n")] = '\0';
    printf("CARTA 1: Digite o número de habitantes: ");
    scanf("%lu", &populacao1);
    printf("CARTA 1: Digite a área do país em m2: ");
    scanf("%f", &area1);
    printf("CARTA 1: Digite o PIB do país em bilhões: ");
    scanf("%f", &pib1);
    printf("CARTA 1: Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico1);
    getchar();
    printf("\n");
    printf("--------------------------CARTA 2------------------------\n\n"); // Espaço entre as informaçoes

    // CARTA 2
    printf("CARTA 2: Digite o País: ");
    fgets(pais2, 50,stdin);
    pais2[strcspn(pais2, "\n")] = '\0';
    printf("CARTA 2: Digite o número de habitantes: ");
    scanf("%lu", &populacao2);
    printf("CARTA 2: Digite a área do país em m2: ");
    scanf("%f", &area2);
    printf("CARTA 2: Digite o PIB do país em bilhões: ");
    scanf("%f", &pib2);
    printf("CARTA 2: Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);
    getchar();

    // CARTA 1
    densidade_populacional_cidade_1 = (float) populacao1 / area1;


    // CARTA 2
    densidade_populacional_cidade_2 = (float) populacao2 / area2;

    // COMPARAÇÃO DAS CARTAS
    printf("\n\n");
    printf("Escolha o atributo a ser comparado: \n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Número de pontos turísticos\n");
    printf("5- Densidade demográfica\n");
    scanf("%d", &escolha);
    printf("\n\n");


    switch (escolha){
    case 1:
        printf("Comparação das cartas (Atributo População): \n\n");
        printf("Carta 1  (%s) - População: %ld\n", pais1, populacao1);
        printf("Carta 2  (%s) - População: %ld\n", pais2, populacao2);
        printf("\n");
        printf("Resultado: \n\n");
        if (populacao1 > populacao2){
            printf("Carta 1  (%s) - %ld venceu\n", pais1,populacao1);
        }
        else if (populacao1< populacao2){
            printf("Carta 2  (%s) - %ld venceu\n",pais2, populacao2);
        }
        else{
            printf("Empate");
        }
    break;

    case 2:
        printf("Comparação das cartas (Área): \n\n");
        printf("Carta 1  (%s) - Área: %.2f\n",pais1, area1);
        printf("Carta 2  (%s) - Área %.2f\n", pais2, area2);
        printf("\n");
        printf("Resultado: \n\n");
        if (area1 > area2){
            printf("Carta 1  (%s) - %.2f venceu\n",pais1, area1);
        }
        else if (area1 < area2){
            printf("Carta 2  (%s) - %.2f venceu\n",pais2, area2);
        }
        else{
            printf("Empate");
        }
    break;

    case 3:
        printf("Comparação das cartas (PIB): \n\n");
        printf("Carta 1  (%s) - PIB: %.2f\n", pais1,pib1);
        printf("Carta 2  (%s) - PIB: %.2f\n", pais2, pib2);
        printf("\n");
        printf("Resultado: \n\n");
        if (pib1 > pib2){
            printf("Carta 1 (%s) - %.2f venceu\n",pais1, pib1);
        }
        else if (pib1 < pib2){
            printf("Carta 2  (%s) - %.2f venceu\n", pais2, pib2);
        }
        else{
            printf("Empate");
        }
    break;

    case 4:
        printf("Comparação das cartas (Número de Pontos Turísticos): \n\n");
        printf("Carta 1 (%s) - Quantidade de Pontos Turísticos: %d\n",pais1, ponto_turistico1);
        printf("Carta 2  (%s) - Quantidade de Pontos Turísticos: %d\n", pais2, ponto_turistico2);
        printf("\n");
        printf("Resultado: \n\n");
        if (ponto_turistico1 > ponto_turistico2){
            printf("Carta 1 (%s)- %d venceu\n",pais1, ponto_turistico1);
        }
        else if (populacao1< populacao2){
            printf("Carta 2 (%s) - %d venceu\n",pais2, ponto_turistico2);
        }
        else{
            printf("Empate");
        }
    break;

    case 5:
        printf("Comparação das cartas (Densidade Demográfica): \n\n");
        printf("Carta 1  (%s) - Densidade Demográfica: %.2f\n", pais1, densidade_populacional_cidade_1);
        printf("Carta 2 (%s) - Densidade Demográfica: %.2f\n", pais2, densidade_populacional_cidade_2);
        printf("\n");
        printf("Resultado: \n\n");
        if (densidade_populacional_cidade_1 > densidade_populacional_cidade_2){
            printf("Carta 2  (%s) - %.2f venceu\n",pais2, densidade_populacional_cidade_2);
        }
        else if (densidade_populacional_cidade_1 < densidade_populacional_cidade_2){
            printf("Carta 1  (%s) - %.2f venceu\n",pais1, densidade_populacional_cidade_1);
        }
        else{
            printf("Empate");
        }
    break;

    default:
          printf("Opção inválida!");
    }

    return 0;
}

