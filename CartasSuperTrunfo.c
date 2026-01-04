#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  printf("Desafio Cartas Super Trunfo!\n");
  printf("Novo commit!\n");
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Criando variáveis das 2 cartas
  char estado1[50], estado2[50];
  char codigo1[50], codigo2[50];
  char cidade1[50], cidade2[50];
  float pib1, pib2;
  float area1, area2;
  int populacao1, populacao2;
  int pturisticos1, pturisticos2;
  
  // Área para entrada de dados da Carta 1
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
  printf("Quantos pontos turísticos: ");
  scanf("%d", &pturisticos1);

  //Área para entrada de dados da Carta 2

  // Área para exibição dos dados da carta 1
  printf("O estado da carta 1: %s\n", estado1);
  printf("O código da carta 1: %s\n", codigo1);
  printf("A cidade da carta 1: %s\n", cidade1);
  printf("O pib da carta 1: %f\n", pib1);
  printf("A área da carta 1: %f\n", area1);
  printf("A população da carta 1: %d\n", populacao1);
  printf("Os pontos turísticos da carta 1: %d\n", pturisticos1);


return 0;

}
