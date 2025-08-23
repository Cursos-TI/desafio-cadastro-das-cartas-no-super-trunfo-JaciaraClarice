#include <stdio.h>

int main () {


    // Inicialização das variáveis da primeira carta

    char estado1[15] = "Alagoas";
    char carta1 = '1';
    char codigodacarta1[5] = "A01";
    char nomedacidade1[15] = "Maceió";
    unsigned long int populacao1 = 995970;
    // Agora uma população grande, por isso o unsigned long int
    float area1 = 509;
    float pib1 = 2748401631;
    int pontosturisticos1 = 6;
    float pibpercapita1 = 27484011631 / 995970;
    float densidadepopulacional1 = 995970 / 509;
    // Inclusão da váriavel Super Poder
    float superpoder1;

    printf("Desafio Super Trunfo Nível Novato \n");
    
    // Inicialização das variáveis da segunda carta

    char carta2 = '2';
    char estado2[19] = "Pará";
    char codigodacarta2[5] = "A02";
    char nomedacidade2[19] = "Belém";
    unsigned long int populacao2 = 1398581;
    // Agora uma população grande, por isso o unsigned long int
    float area2 = 152531;
    float pib2 = 30835;
    int pontosturisticos2 = 6;
    float pibpercapita2 = 30835 / 1398581;
    float densidadepopulacional2 = 1398581 / 152531;
    // Inclusão da variável Super Poder
    float superpoder2;


    // Cadastro básico da primeira carta

    printf("Cadastro da primeira carta:\n");

    printf("Código da carta: ");
    scanf("%s", codigodacarta1);

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Nome da cidade: ");
    scanf("%s", nomedacidade1);

    printf("Populacão: ");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

        
    // Abaixo o cálculo do pib per capita e densidade populacional da primeira carta
    
    pibpercapita1 = (float)pib1 / populacao1;
    densidadepopulacional1 = (float)populacao1 / area1;
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);

    // Abaixo o cálculo do pib per capita e densidade populacional da segunda carta
    
    pibpercapita2 = (float)pib2 / populacao2;
    densidadepopulacional2 = (float)populacao2 / area2;
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);


    // Exibindo os dados cadastrados da primeira carta juntamente com o resultado do PIB per capita
    // e da densidade populacional


    printf("\nDados da Primeira Carta:\n");

    printf("Código da carta: %s\n", codigodacarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);


    // Exibindo os dados cadastrados da segunda carta juntamente com o resultado do PIB per capita
    // e da densidade populacional


    printf("\nDados da Segunda Carta:\n");

    printf("Código da carta: %s\n", codigodacarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);


    // Calculando novamente a densidade populacional e o pib per capita da primeira carta 
    // para dar início ao desafio mestre

    float resultadopibpercapita1;
    float resultadodensidadepopulacional1;
    
    pibpercapita1 = (float)pib1 / populacao1;
    densidadepopulacional1 = (float)populacao1 / area1;

    // Abaixo o resultado

    resultadopibpercapita1 = (float)pib1 / populacao1;
    resultadodensidadepopulacional1 = (float)populacao1 / area1;

    // Calculando novamente a densidade populacional e o pib per capita da segunda carta 
    // para dar início ao desafio mestre

    float resultadopibpercapita2;
    float resultadodensidadepopulacional2;

    pibpercapita2 = (float)pib2 / populacao2;
    densidadepopulacional2 = (float)populacao2 / area2;

    // Abaixo o resultado

    resultadopibpercapita2 = (float)pib2 / populacao2;
    resultadodensidadepopulacional2 = (float)populacao2 / area2;

    // Calculando o Super Poder somando todos os atributos da primeira carta

    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 +
    resultadopibpercapita1 + 
    (1.0 / resultadodensidadepopulacional1); // Inverso da densidade populacional

     // Calculando o Super Poder somando todos os atributos da segunda carta
     
     superpoder2  = populacao2 + area2 + pib2 + pontosturisticos2 +
     resultadopibpercapita2 + 
     (1.0 / resultadodensidadepopulacional2); // Inverso da densidade populacional

     // Cálculo da comparação das cartas para saber qual venceu
     // Se aparecer (1), a carta 1 venceu
     // Se aparecer (0), a carta 2 venceu


     int resultadopopulacao = (populacao1 > populacao2);
     int resultadoarea = (area1 > area2);
     int resultadopib = (pib1 > pib2);
     int resultadopontosturisticos = (pontosturisticos1 > pontosturisticos2);
     int resultadodensidadepopulacional = (densidadepopulacional1 < densidadepopulacional2);
     int resultadopibpercapita = (pibpercapita1 > pibpercapita2);
     int resultadosuperpoder = (superpoder1 > superpoder2);

    // Exibindo os vencedores:

    printf("\nExibindo as cartas vencedoras:\n");

    printf("População: Carta %s venceu (%d)\n", resultadopopulacao ? "1" : "2", resultadopopulacao);
    printf("Área: Carta %s venceu (%d)\n", resultadoarea ? "1" : "2", resultadoarea);
    printf("PIB: Carta %s venceu (%d)\n", resultadopib ? "1" : "2", resultadopib);
    printf("Pontos Turísticos: Carta %s venceu (%d)\n", resultadopontosturisticos ? "1" : "2", resultadopontosturisticos);
    printf("Densidade Populacional: Carta %s venceu (%d)\n", resultadodensidadepopulacional ? "1" : "2", resultadodensidadepopulacional);
    printf("PIB per Capita: Carta %s venceu (%d)\n", resultadopibpercapita ? "1" : "2", resultadopibpercapita);
    printf("Super Poder: Carta %s venceu (%d)\n", resultadosuperpoder ? "1" : "2", resultadosuperpoder);





     






        
        return 0;

    }