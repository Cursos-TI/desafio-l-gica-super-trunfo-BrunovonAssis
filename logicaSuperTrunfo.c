#include <stdio.h>

int main() {
    char estado[2];
    char estado2[2];
    char codigo[4];
    char codigo2[4];
    char nome[50];
    char nome2[50];
    unsigned int populacao;
    unsigned int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int pontosturisticos;
    int pontosturisticos2;
    
    printf("Carta 1\n");
    printf("Digite o nome do estado: \n");
    scanf("%s", estado);
    printf("Digite o código do estado: \n");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);
    
    printf("Carta 2\n");
    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);
    printf("Digite o código do estado: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    float densidadepopulacional = (float)populacao/area;
    float densidadepopulacional2 = (float)populacao2/area2;
    float pibpercapita = (pib*1000000000)/(float)populacao;
    float pibpercapita2 = (pib2*1000000000)/(float)populacao2;
    float superpoder = area + pib + pontosturisticos + 1/densidadepopulacional + pibpercapita;
    float superpoder2 = area2 + pib2 + pontosturisticos2 + 1/densidadepopulacional2 + pibpercapita2;

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f hab/Km²\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n", pibpercapita);
    printf("Superpoder: %.2f\n", superpoder);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/Km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Superpoder: %.2f\n", superpoder2);
    
    printf("Comparação de cartas:\n");
    printf("Atributo: população\n");
    printf("%s: %d %s: %d\n", nome, populacao, nome2, populacao2);
    if (populacao > populacao2) {
        printf("Carta 1 venceu\n");
    } else if (populacao < populacao2) {
        printf("Carta 2 venceu\n");
    }
    printf("Atributo: área\n");
    printf("%s: %.2f %s: %.2f\n", nome, area, nome2, area2);
    if (area > area2) {
        printf("Carta 1 venceu\n");
    } else if (area < area2) {
        printf ("Carta 2 venceu\n");
    }
    printf("Atributo: PIB\n");
    printf("%s: %.2f %s: %.2f\n", nome, pib, nome2, pib2);
    if (pib > pib2) {
        printf("Carta 1 venceu\n");
    } else if (pib < pib2) {
        printf ("Carta 2 venceu\n");
    }
    printf("Atributo: número de pontos turísticos\n");
    printf("%s: %d %s: %d\n", nome, pontosturisticos, nome2, pontosturisticos2);
    if (pontosturisticos > pontosturisticos2) {
        printf("Carta 1 venceu\n");
    } else if (pontosturisticos < pontosturisticos2) {
        printf ("Carta 2 venceu\n");
    }
    printf("Atributo: densidade populacional\n");
    printf("%s: %.2f %s: %.2f\n", nome, densidadepopulacional, nome2, densidadepopulacional2);
    if (densidadepopulacional < densidadepopulacional2) {
        printf("Carta 1 venceu\n");
    } else if (densidadepopulacional > densidadepopulacional2) {
        printf ("Carta 2 venceu\n");
    }
    printf("Atributo: PIB per capita\n");
    printf("%s: %.2f %s: %.2f\n", nome, pibpercapita, nome2, pibpercapita2);
    if (pibpercapita > pibpercapita2) {
        printf("Carta 1 venceu\n");
    } else if (pibpercapita < pibpercapita2) {
        printf ("Carta 2 venceu\n");
    }
    printf("Atributo: superpoder\n");
    printf("%s: %.2f %s: %.2f\n", nome, superpoder, nome2, superpoder2);
    if (superpoder > superpoder2) {
        printf("Carta 1 venceu\n");
    } else if (superpoder < superpoder2) {
        printf ("Carta 2 venceu\n");

    return 0;
 }
