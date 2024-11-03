// Versão 1.3 - Novato

#include <stdio.h>
#include <string.h> // bibliteca para leitura de String
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.



int main() {

    char estado;
    char codigodacarta[3];
    char nomedacidade[50];
    int populacao, numeroPT;
    float area, pib;

    printf ("Digite o numero codigo do estado: ");
    scanf (" %c", &estado); // O espaço antes de %c ignora caracteres de nova linha
    printf ("\n");

    getchar();

    printf ("Digite o numero codigo da carta: ");
    scanf (" %s", codigodacarta); // Não precisa do &. Quando você declara um array, como `char codigodacarta[3];`, o nome `codigodacarta` representa o endereço do primeiro elemento do array. Portanto, ao passar o array para uma função (como `scanf`), você está efetivamente passando um ponteiro para o primeiro caractere do array.
    printf ("\n");

    getchar();

    printf ("Digite o nome da cidade: ");
    fgets(nomedacidade, sizeof(nomedacidade), stdin); // a função fgets serve para ler nomes com espaços "stdin - informa que está lendo do teclado" no final da função ela retorna um \n, sizeof usar sizeofpara descobrir o tamanho de tipos de dados
    nomedacidade[strcspn(nomedacidade, "\n")] = 0;    // Remover a nova linha que fgets pode capturar
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


    printf("Codigo do estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("Numero da populacao: %d\n", populacao);
    printf("Area da cidade: %.2f\n", area); // Formato para 2 casas decimais
    printf("PIB da cidade: %.2f\n", pib); // Formato para 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n", numeroPT);

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
