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

    printf("Supertrunfo\n");
    printf("Menu principal\n");
    printf("1 - Jogar\n");
    printf("2 - Sair\n");
    printf("Escolha uma opção: \n");
    int opcao;
    scanf("%d", &opcao);

    switch (opcao) {
        case 2:
            printf("Saindo do jogo...\n");
            return 0;
        break;
        default:
            printf("Opção inválida\n");
            return 0;
        break;
        case 1:
            printf("Iniciando o jogo...\n");
        
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
    
    int resultado;
    int resultado2;
    printf("Escolha o primeiro atributo: (1-População, 2-Área, 3-PIB, 4-Número de pontos turísticos, 5-Densidade populacional, 6-PIB per capita, 7-Superpoder)\n");
    int atributo;
    scanf("%d", &atributo);
    switch (atributo) {
        case 1:
        printf("Atributo: população\n");
        resultado = populacao > populacao2 ? 1 : 0;
        break;

        case 2:
        printf("Atributo: área\n");
        resultado = area > area2 ? 1 : 0;
        break;

        case 3:
        printf("Atributo: PIB\n");
        resultado = pib > pib2 ? 1 : 0;
        break;

        case 4:
        printf("Atributo: número de pontos turísticos\n");
        resultado = pontosturisticos > pontosturisticos2 ? 1 : 0;
        break;
        
        case 5:
        printf("Atributo: densidade populacional\n");
        resultado = densidadepopulacional > densidadepopulacional2 ? 0 : 1;
        break;

        case 6:
        printf("Atributo: PIB per capita\n");
        resultado = pibpercapita > pibpercapita2 ? 1 : 0;
        break;

        case 7:
        printf("Atributo: superpoder\n");
        resultado = superpoder > superpoder2 ? 1 : 0;
        break;
        default:
            printf("Atributo iválido\n");
        }

        printf("Escolha o segundo atributo: (1-População, 2-Área, 3-PIB, 4-Número de pontos turísticos, 5-Densidade populacional, 6-PIB per capita, 7-Superpoder)\n");
        int atributo2;
        scanf("%d", &atributo2);
        switch (atributo2) {
            case 1:
            printf("Atributo: população\n");
            resultado2 = populacao > populacao2 ? 1 : 0;
            break;
    
            case 2:
            printf("Atributo: área\n");
            resultado2 = area > area2 ? 1 : 0;
            break;
    
            case 3:
            printf("Atributo: PIB\n");
            resultado2 = pib > pib2 ? 1 : 0;
            break;
    
            case 4:
            printf("Atributo: número de pontos turísticos\n");
            resultado2 = pontosturisticos > pontosturisticos2 ? 1 : 0;
            break;
            
            case 5:
            printf("Atributo: densidade populacional\n");
            resultado2 = densidadepopulacional > densidadepopulacional2 ? 0 : 1;
            break;
    
            case 6:
            printf("Atributo: PIB per capita\n");
            resultado2 = pibpercapita > pibpercapita2 ? 1 : 0;
            break;
    
            case 7:
            printf("Atributo: superpoder\n");
            resultado2 = superpoder > superpoder2 ? 1 : 0;
            break;
            default:
                printf("Atributo iválido\n");
            }
            if (atributo == atributo2) {
                printf("Atributos iguais, escolha outro atributo\n");
            }
            else {}
            if (resultado == 1 && resultado2 == 1) {
                printf("Carta 1 venceu!\n");
            } else if (resultado == 0 && resultado2 == 0) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
        }

    return 0;
}
