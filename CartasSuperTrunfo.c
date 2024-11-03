// Versão 1.0 - Novato

#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char estado;
    char codigodacarta[3];
    char nomedacidade[20];
    int populacao, numeroPT;
    float area, pib;

    printf ("Digite o numero codigo do estado: ");
    scanf (" %c", &estado);
    printf ("\n");

    printf ("Digite o numero codigo da carta: ");
    scanf ("%s", codigodacarta);
    printf ("\n");

    printf ("Digite o nome da cidade: ");
    scanf ("%s", nomedacidade);
    printf ("\n");

    printf ("Digite o numero da população: ");
    scanf ("%d", &populacao);
    printf ("\n");

    printf ("Digite a área da cidade: ");
    scanf ("%f", &area);
    printf ("\n");

    printf ("Digite o PIB da cidade: ");
    scanf ("%f", &pib);
    printf ("\n");

    printf ("Digite o Número de Pontos Turísticos: ");
    scanf ("%d", &numeroPT);
    printf ("\n");


    printf ("Digite o numero codigo do estado:%c \nDigite o numero codigo da carta:%s \n", estado, codigodacarta);
    printf ("Nome da Cidade:%s \nNumero da população:%d \nÁrea da cidade:%f \n", nomedacidade, populacao, area);
    printf ("PIB da cidade:%f \nNúmero de Pontos Turísticos:%d", pib, numeroPT);

    return 0;
}

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.