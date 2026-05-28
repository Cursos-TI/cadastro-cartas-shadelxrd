#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Variáveis carta 1
  
char estado1;
char codigo1[4];
char nomeCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

  // Variáveis carta 2
  
char estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;
  
printf("--- Super Trunfo: Países - Cadastro das Cartas ---\n\n");
  // Área para entrada de dados - Carta 1

printf("Digite os dados da Carta 1:\n");
    
printf("Estado (A-H): ");
scanf(" %c", &estado1);
    
printf("Código (ex: A01): ");
scanf("%s", codigo1);
    
printf("Nome da Cidade: ");
scanf(" %[^\n]", nomeCidade1); // O %[^\n] permite ler nomes compostos (com espaços)
    
printf("População: ");
scanf("%d", &populacao1);
    
printf("Área (em km²): ");
scanf("%f", &area1);
    
printf("PIB (em bilhões): ");
scanf("%f", &pib1);
    
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos1);

   // Área para entrada de dados - Carta 2

printf("\nDigite os dados da Carta 2:\n");
    
printf("Estado (A-H): ");
scanf(" %c", &estado2); // O espaço antes do %c ignora o 'Enter' da leitura anterior
    
printf("Código (ex: B02): ");
scanf("%s", codigo2);
    
printf("Nome da Cidade: ");
scanf(" %[^\n]", nomeCidade2);
    
printf("População: ");
scanf("%d", &populacao2);
    
printf("Área (em km²): ");
scanf("%f", &area2);
    
printf("PIB (em bilhões): ");
scanf("%f", &pib2);
    
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);
  
  // Área para exibição dos dados da cidade

printf("\n----------------------------------\n");
printf("       CARTAS CADASTRADAS\n");
printf("----------------------------------\n\n");

  // Carta 1
printf("Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    // Carta 2
printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
} 
