#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // carta1
  char estado_carta1;
  char codigo_carta1[4];
  char cidade_carta1[50];
  int população_carta1;
  float area_carta1;
  float pib_carta1;
  int pontos_turisticos_carta1;

  // carta2
  char estado_carta2;
  char codigo_carta2[4];
  char cidade_carta2[50];
  int população_carta2;
  float area_carta2;
  float pib_carta2;
  int pontos_turisticos_carta2;

  // Área para entrada de dados

  // Cadastro carta1
  printf("Cadastrando Carta 1\n");

  printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
  // O " %c" com espaço inicial ignora o Enter (\n) que pode ter ficado no buffer.
  scanf(" %c", &estado_carta1);

  printf("Digite o código da carta - letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
  // Removido o "&" pois codigo_carta1 é um array (string).
  scanf("%s", codigo_carta1);

  // setbuf(stdin, NULL) limpa o buffer para o fgets não ler o "Enter" anterior.
  setbuf(stdin, NULL);
  printf("Digite o nome da cidade da carta: ");
  // fgets permite ler nomes com espaços (Ex: Rio de Janeiro).
  fgets(cidade_carta1, 50, stdin);
  cidade_carta1[strcspn(cidade_carta1, "\n")] = 0; // Remove a quebra de linha do final

  printf("Digite a população de %s: ", cidade_carta1);
  scanf("%d", &população_carta1);

  printf("Digite a área da cidade de %s: ", cidade_carta1);
  scanf("%f", &area_carta1);

  printf("Digite o PIB de %s: ", cidade_carta1);
  scanf("%f", &pib_carta1);

  printf("Digite o número de pontos turísticos de %s: ", cidade_carta1);
  scanf("%d", &pontos_turisticos_carta1);

  // Cadastro carta2
  printf("\nCadastrando Carta 2\n");

  printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
  // Espaço antes do %c evita que o "Enter" da resposta anterior seja lido como a letra do estado.
  scanf(" %c", &estado_carta2);

  printf("Digite o código da carta - letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
  scanf("%s", codigo_carta2);

  // Limpeza do buffer essencial antes de usar fgets após um scanf.
  setbuf(stdin, NULL);
  printf("Digite o nome da cidade da carta: ");
  fgets(cidade_carta2, 50, stdin);
  cidade_carta2[strcspn(cidade_carta2, "\n")] = 0;

  printf("Digite a população de %s: ", cidade_carta2);
  scanf("%d", &população_carta2);

  printf("Digite a área da cidade de %s: ", cidade_carta2);
  scanf("%f", &area_carta2);

  printf("Digite o PIB de %s: ", cidade_carta2);
  scanf("%f", &pib_carta2);

  printf("Digite o número de pontos turísticos de %s: ", cidade_carta2);
  scanf("%d", &pontos_turisticos_carta2);

  // Área para exibição dos dados da cidade

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado_carta1);
  printf("Código: %s\n", codigo_carta1);
  printf("Cidade: %s\n", cidade_carta1);
  printf("População: %d\n", população_carta1);
  printf("Área: %.2f km²\n", area_carta1);
  printf("PIB: R$ %.2f\n", pib_carta1);
  printf("Pontos turísticos: %d\n", pontos_turisticos_carta1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado_carta2);
  printf("Código: %s\n", codigo_carta2);
  printf("Cidade: %s\n", cidade_carta2);
  printf("População: %d\n", população_carta2);
  printf("Área: %.2f km²\n", area_carta2);
  printf("PIB: R$ %.2f\n", pib_carta2);
  printf("Pontos turísticos: %d\n", pontos_turisticos_carta2);

  return 0;
} 