#include <stdio.h>

int main () {


    // Inicialização das variáveis da primeira carta

    char estado1[15] = "Acre";
    int carta1 = 1;
    char codigodacarta1[5] = "A01";
    char nomedacidade1[15] = "Rio Branco";
    int populacao1 = 880361;
    float area1 = 1059;
    float pib1 = 21374;
    int pontosturisticos1 = 9;

    printf("Desafio Super Trunfo Nível Novato \n");
    
    // Inicialização das variáveis da segunda carta

    int carta2 = 2;
    char estado2[20] = "Belém";
    char codigodacarta2[5] = "A02";
    char nomedacidade2[30] = "Pará";
    int populacao2 = 1398581;
    float area2 = 152531;
    float pib2 = 30835;
    int pontosturisticos2 = 6;


    // Cadastro básico da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Populacão: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);


    // Cadastro básico da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibindo os dados cadastrados
    printf("\nDados da Primeira Carta:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    printf("\nDados da Segunda Carta:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    return 0;

}