#include <stdio.h>

int main(){
    char estado1, estado2, codigo1[5], codigo2[5], nome1[50], nome2[50];
    int populacao1, populacao2, ponto_turistico1, ponto_turistico2;
    float area1, area2, pib1, pib2;

// CARTA 1
    printf("CARTA 1: Digite a inicial do Estado: ");
    scanf(" %c",&estado1);
    getchar();
    printf("CARTA 1: Digite o código da carta: ");
    fgets(codigo1, 5, stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';
    printf("CARTA 1: Digite o nome da cidade: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';
    printf("CARTA 1: Digite o número de habitantes: ");
    scanf("%d", &populacao1);
    printf("CARTA 1: Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("CARTA 1: Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("CARTA 1: Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico1);

    printf("\n\n"); // Espaço entre as informaçoes

    // CARTA 2
    printf("CARTA 2: Digite a inicial do Estado: ");
    scanf(" %c",&estado2);
    getchar();
    printf("CARTA 2: Digite o código da carta: ");
    fgets(codigo2, 5, stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';
    printf("CARTA 2: Digite o nome da cidade: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    printf("CARTA 2: Digite o número de habitantes: ");
    scanf("%d", &populacao2);
    printf("CARTA 2: Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("CARTA 2: Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("CARTA 1: Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);

    // CARTA 1
    printf("\n");
    printf("CARTA 1:\n");
    printf("ESTADO: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", ponto_turistico1);

    // CARTA 2
    printf("\n");
    printf("CARTA 2: \n\n");
    printf("ESTADO: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", ponto_turistico2);


    return 0;
}

