#include <stdio.h>

int main() {

    // Inicialização das variáveis da primeira carta

    char estado1[15] = "Acre";
    char codigodacarta1[5] = "A01";
    char nomedacidade1[15] = "Rio Branco";
    float populacao1 = 880361;
    float area1 = 1059;
    float pib1 = 21374;
    int pontosturisticos1 = 9;

    // Entrada dos dados da primeira carta

    printf("Carta 1: \n");
    printf("Código da carta: %s\n", codigodacarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %2.f\n", populacao1);
    printf("Área: %2.f km² \n", area1);
    printf("PIB: %2.f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

   
   // Inicialização das variáveis da segunda carta

    int carta2 = 2;
    char estado2[20] = "Belém";
    char codigodacarta2[5] = "A02";
    char nomedacidade2[30] = "Pará";
    float populacao2 = 1398581;
    float area2 = 152531;
    float pib2 = 30835;
    int pontosturisticos2 = 6;

    // Entrada dos dados da segunda carta

    printf("\nCarta 2: \n");
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %2.f\n", populacao2);
    printf("Área: %2.f km² \n", area2);
    printf("PIB: %2.f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}