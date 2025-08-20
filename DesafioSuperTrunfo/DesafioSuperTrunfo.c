#include <stdio.h>

int main () {


    // Inicialização das variáveis da primeira carta

    char estado1[15] = "Alagoas";
    int carta1 = 1;
    char codigodacarta1[5] = "A01";
    char nomedacidade1[15] = "Maceió";
    float populacao1 = 995970;
    float area1 = 509;
    float pib1 = 2748401631;
    int pontosturisticos1 = 6;
    float pibpercapita1 = 27484011631 / 995970;
    float densidadepopulacional1 = 995970 / 509;

    printf("Desafio Super Trunfo Nível Novato \n");
    
    // Inicialização das variáveis da segunda carta

    int carta2 = 2;
    char estado2[19] = "Pará";
    char codigodacarta2[5] = "A02";
    char nomedacidade2[19] = "Belém";
    float populacao2 = 1398581;
    float area2 = 152531;
    float pib2 = 30835;
    int pontosturisticos2 = 6;
    float pibpercapita2 = 30835 / 1398581;
    float densidadepopulacional2 = 1398581 / 152531;


    // Cadastro básico da primeira carta

    printf("Cadastro da primeira carta:\n");

    printf("Código da carta: ");
    scanf("%s", codigodacarta1);

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Nome da cidade: ");
    scanf("%s", nomedacidade1);

    printf("Populacão: ");
    scanf("%f", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);


    // Cadastro básico da segunda carta

    printf("\nCadastro da segunda carta:\n");

    printf("Código da carta: ");
    scanf("%s", codigodacarta2);

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Nome da cidade: ");
    scanf("%s", nomedacidade2);

    printf("População: ");
    scanf("%f", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);



    // Exibindo os dados cadastrados da primeira carta juntamente com o resultado do PIB per capita
    // e da densidade populacional


    printf("\nDados da Primeira Carta:\n");

    printf("Código da carta: %s\n", codigodacarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %2.f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    
    // Abaixo o cálculo do pib per capita e densidade populacional da primeira carta
    
    pibpercapita1 = (float)pib1 / populacao1;
    densidadepopulacional1 = (float)populacao1 / area1;
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);


    // Exibindo os dados cadastrados da segunda carta juntamente com o resultado do PIB per capita
    // e da densidade populacional


    printf("\nDados da Segunda Carta:\n");

    printf("Código da carta: %s\n", codigodacarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %2.f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);


    // Abaixo o cálculo do pib per capita e densidade populacional da segunda carta
    
    pibpercapita2 = (float)pib2 / populacao2;
    densidadepopulacional2 = (float)populacao2 / area2;
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
        
        return 0;

    }