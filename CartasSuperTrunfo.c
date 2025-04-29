#include <stdio.h>
int main () {
    //declarando dados básicos;
    char estado, estado1;
    char codigo[50], codigo1[50];
    char cidade[50], cidade1[50];
    int pop, pop1;
    float area, area1, pib, pib1;
    int pontos, pontos1;

    //declarando cálculos;
    float densidade = pop / area;
    float densidade1 = pop1 / area1;

    float capita = pib / pop;
    float capita1 = pib1 / pop1;

    //Carta 1
    printf("Diga a letra de um estado de A a H: ");
    scanf("%c", &estado);
    fflush(stdin);

    printf("Digite esta mesma letra + um numero de 01 a 04: ");
    scanf("%s", &codigo);
    fflush(stdin);

    printf("Digite o nome de uma cidade deste estado: ");
    scanf("%s", &cidade);
    fflush(stdin);

    printf("Insira o numero de habitantes desta cidade: ");
    scanf("%d", &pop);
    fflush(stdin);

    printf("Informe a area desta cidade: ");
    scanf("%f", &area);
    fflush(stdin);

    printf("Informe o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib);
    fflush(stdin);

    printf("Informe o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos);
    fflush(stdin);

    //Carta 2
    printf("\n\nDiga a letra de um estado de A a H: ");
    scanf("%c", &estado1);
    fflush(stdin);

    printf("Digite esta mesma letra + um numero de 01 a 04: ");
    scanf("%s", &codigo1);
    fflush(stdin);

    printf("Digite o nome de uma cidade deste estado: ");
    scanf("%s", &cidade1);
    fflush(stdin);

    printf("Insira o numero de habitantes desta cidade: ");
    scanf("%d", &pop1);
    fflush(stdin);

    printf("Informe a area desta cidade: ");
    scanf("%f", &area1);
    fflush(stdin);

    printf("Informe o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib1);
    fflush(stdin);

    printf("Informe o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos1);
    fflush(stdin);

    printf("\nCarta 1:\nEstado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Numero de habitantes: %d\n", pop);
    printf("Área(km²): %.2fkm²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisiticos: %d\n", pontos);
    printf("Densidade populacional: %.2fhab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n", capita);

    printf("\nCarta 2: \nEstado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Numero de habitantes: %d\n", pop1);
    printf("Área(km²): %.2fkm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisiticos: %d\n", pontos1);
    printf("Densidade populacional: %.2fhab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", capita1);
    
    return 0;
}
