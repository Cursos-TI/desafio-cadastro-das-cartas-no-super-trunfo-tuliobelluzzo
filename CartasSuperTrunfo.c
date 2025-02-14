#include <stdio.h>

int main() {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Cadastro da cidade
    printf("Código da cidade (ex: A01, B02): ");
    scanf("%s", codigo);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados cadastrados
    printf("\nDados da cidade cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}