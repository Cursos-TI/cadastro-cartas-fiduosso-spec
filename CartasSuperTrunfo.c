#include <stdio.h>

int main() {
  
  printf("Desafio Cartas Super Trunfo!\n");
  printf("Novo commit!\n");
  
  //Definindo variáveis das 2 cartas
  char estado1[50], estado2[50];
  char codigo1[50], codigo2[50];
  char cidade1[50], cidade2[50];
  float pib1, pib2;
  float area1, area2;
  int populacao1, populacao2;
  int pturisticos1, pturisticos2;
  
  // Área para entrada de dados da carta  1
  printf("Insira os dados da carta 1!\n");
  printf("Qual o estado: \n");
  scanf("%s", &estado1);

  printf("Qual o código: \n");
  scanf("%s", &codigo1);

  printf("Qual a cidade: \n");
  scanf("%s", &cidade1);

  printf("Qual o PIB: \n");
  scanf("%f", &pib1);

  printf("Qual a área: \n");
  scanf("%f", &area1);

  printf("Qual a população: \n");
  scanf("%d", &populacao1);

  printf("Quantos pontos turísticos: \n");
  scanf("%d", &pturisticos1);

  //Área para entrada de dados da Carta 2
  printf("Insira os dados da carta 2!\n");
  printf("Qual o estado: \n");
  scanf("%s", &estado2);

  printf("Qual o código: \n");
  scanf("%s", &codigo2);

  printf("Qual a cidade: \n");
  scanf("%s", &cidade2);

  printf("Qual o PIB: \n");
  scanf("%f", &pib2);

  printf("Qual a área: \n");
  scanf("%f", &area2);

  printf("Qual a população: \n");
  scanf("%d", &populacao2);

  printf("Quantos pontos turísticos: \n");
  scanf("%d", &pturisticos2);

  // Área para exibição dos dados da carta 1
  printf("O estado da carta 1: %s\n", estado1);
  printf("O código da carta 1: %s\n", codigo1);
  printf("A cidade da carta 1: %s\n", cidade1);
  printf("O pib da carta 1: %f\n", pib1);
  printf("A área da carta 1: %f metros quadrados\n", area1);
  printf("A população da carta 1: %d\n", populacao1);
  printf("Os pontos turísticos da carta 1: %d\n", pturisticos1);

  //Área para exibição dos dados da carta 2
  printf("O estado da carta 2: %s\n", estado2);
  printf("O código da carta 2: %s\n", codigo2);
  printf("A cidade da carta 2: %s\n", cidade2);
  printf("O pib da carta 2: %f\n", pib2);
  printf("A área da carta 2: %f metros quadrados\n", area2);
  printf("A população da carta 2: %d\n", populacao2);
  printf("Os pontos turísticos da carta 2: %d\n", pturisticos2);

return 0;

}
