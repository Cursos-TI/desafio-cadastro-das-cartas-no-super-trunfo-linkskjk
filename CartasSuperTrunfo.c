#include <stdio.h>
int main () {
    char estado, estado1;
    char codigo[50], codigo1[50];
    char cidade[50], cidade1[50];
    int pop, pop1;
    float area, area1, pib, pib1, pontos, pontos1;

    //Carta 1
    printf("Selecione um estado com a letra de A a H: ");
    scanf("%c", &estado);
    fflush(stdin);

    printf("Adicione esta mesma letra + um numero de 01 a 04: ");
    scanf("%s", &codigo);
    fflush(stdin);

    printf("Escolha o nome de uma cidade deste estado: ");
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
    scanf("%f", &pontos);
    fflush(stdin);

    //Carta 2
    printf("\n\nSelecione um novo estado com a letra de A a H: ");
    scanf("%c", &estado1);
    fflush(stdin);

    printf("Adicione esta mesma letra + um numero de 01 a 04: ");
    scanf("%s", &codigo1);
    fflush(stdin);

    printf("Escolha o nome de uma cidade deste estado: ");
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
    scanf("%f", &pontos1);
    fflush(stdin);
//Print da Carta 1
    printf("\nCarta 1:\nEstado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Numero de habitantes: %d\n", pop);
    printf("Área(km²): %fkm²\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisiticos: %f\n", pontos);

//Print da Carta 2
    printf("\nCarta 2: \nEstado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Numero de habitantes: %d\n", pop1);
    printf("Área(km²): %fkm²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turisiticos: %f\n", pontos1);

    return 0;
}
