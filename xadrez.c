#include <stdio.h>

int main(){
    char estado1[50], estado2[50], codigo1[5], codigo2[5], nome1[50], nome2[50];
    int ponto_turistico1, ponto_turistico2;
    float area1, area2, pib1, pib2,densidade_populacional_cidade_1, densidade_populacional_cidade_2, pib_percapita_1, pib_percapita_2, super_poder1 = 0, super_poder2 = 0;
    unsigned long int populacao1, populacao2;



// CARTA 1
    printf("CARTA 1: Digite o nome do Estado: ");
    fgets(estado1, 50, stdin);
    estado1[strcspn(estado1, "\n")] = '\0';
    printf("CARTA 1: Digite o código da carta: ");
    fgets(codigo1, 5, stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';
    printf("CARTA 1: Digite o nome da cidade: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';
    printf("CARTA 1: Digite o número de habitantes: ");
    scanf("%lu", &populacao1);
    printf("CARTA 1: Digite a área da cidade: ");
    scanf("%f", &area1);
    getchar();
    printf("CARTA 1: Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib1);
    printf("CARTA 1: Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico1);
    getchar();

    printf("\n\n"); // Espaço entre as informaçoes

    // CARTA 2
    printf("CARTA 2: Digite o nome do Estado: ");
    fgets(estado2, 50,stdin);
    estado2[strcspn(estado2, "\n")] = '\0';
    printf("CARTA 2: Digite o código da carta: ");
    fgets(codigo2, 5, stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';
    printf("CARTA 2: Digite o nome da cidade: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    printf("CARTA 2: Digite o número de habitantes: ");
    scanf("%lu", &populacao2);
    printf("CARTA 2: Digite a área da cidade: ");
    scanf("%f", &area2);
    getchar();
    printf("CARTA 2: Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib2);
    printf("CARTA 2: Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);
    getchar();

    // CARTA 1
    densidade_populacional_cidade_1 = (float) populacao1 / area1;
    pib_percapita_1 = (pib1 * 1000000000.0f) / (float) populacao1;


    // CARTA 2
    densidade_populacional_cidade_2 = (float) populacao2 / area2;
    pib_percapita_2 =  (pib2 * 1000000000.0f) / (float) populacao2;

    // COMPARAÇÃO DAS CARTAS
    printf("\n\n");
    printf("Comparação das cartas (Atributo População): \n");

    printf("Carta 1 - %s (%s): %ld\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %ld\n", nome2, estado2, populacao2);
    printf("Resultado: ");


    if (populacao1 > populacao2){
        printf("Carta 1 (%s) venceu!\n", nome1);
    }
    else{
        printf(" Carta 2 (%s) venceu!\n", nome2);
    }


    return 0;
}

