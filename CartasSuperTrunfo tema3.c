#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
// Carta 1
    char estado1[]= "Pará";
    char codigo1[5] = "A01";
    char nomeCidade1[50] = "Belém";
    int populacao1 = 1500000;
    float area1 = 2000.0;
    float pib1 = 15.5;
    int pontosTuristicos1 = 10;
    float densidade1;
    
     // Carta 2
    char estado2[] = "Amazonas";
    char codigo2[5] = "B02";
    char nomeCidade2[50] = "Manaus";
    int populacao2 = 2000000;
    float area2 = 18000.0;
    float pib2 = 20.0;
    int pontosTuristicos2 = 15;
    float densidade2;
    
  // Área para entrada de dados
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

  // Área para exibição dos dados da cidade
   
if (populacao1 > populacao2) { //condição para verificar se a população da carta 1 é maior que a população da carta 2
    printf("\nPopulação: Carta 1 venceu! %s, %s", nomeCidade1, estado1); //imprime mensagem se a condição for verdadeira
}
else {
    printf("\nPopulação: Carta 2 venceu! %s, %s", nomeCidade2, estado2);
    }
    if (densidade1 < densidade2) { //condição para verificar se a densidade da carta 1 é menor que a densidade da carta 2
    printf("\nDensidade: Carta 1 venceu! %s, %s", nomeCidade1, estado1); //imprime mensagem se a condição for verdadeira
    }
    else {
    printf("\nDensidade: Carta 2 venceu! %s, %s", nomeCidade2, estado2);
}
if (pib1 > pib2) { //condição para verificar se o PIB da carta 1 é maior que o PIB da carta 2
    printf("\nPIB: Carta 1 venceu! %s, %s", nomeCidade1, estado1); //imprime mensagem se a condição for verdadeira
}
else {
    printf("\nPIB: Carta 2 venceu! %s, %s", nomeCidade2, estado2);
}
}
