// Curso: Análise e Desenvolvimento de Sistemas
// Aluno: Rafael Varaschin
// Matrícula: 202501605966 - Polo Centro Curitiba/Pr.
// Tema 1: Super Trunfo em c: Fundamentos e Técnicas Avançadas

#include <stdio.h>

int main () {

//Declaração das variáveis da Carta 1
        char estado [1], codigo_carta [4], cidade [50];
        int populacao, pontos_turisticos;
        float area, pib, pib_percapita, densidade_populacional;

// Declaração das variáveis da Carta 2
        char estado2 [1], codigo_carta2 [4], cidade2 [50];
        int populacao2, pontos_turisticos2;
        float area2, pib2, pib_percapita2, densidade_populacional2;

// Inserindo dados da Carta 1:
        printf ("*** DESAFIO SUPER TRUNFO ***\n");
        printf ("*** NIVEL AVENTUREIRO ***\n");
        printf ("CADASTRO DA CARTA 1 \n\n");

        printf("A = Sao Paulo \nB = Rio de Janeiro \nC = Parana \nD = Santa Catarina \nE = Rio Grande do Sul \nF = Pernambuco \nG = Ceara \nH = Rio Grande do Norte \n\n");
        printf("Digite a Inicial do Estado: ");
        scanf ("%s", &estado);

        printf("Digite o codigo da Carta. Com 2 digitos, exemplo (01, 03): ");
        scanf("%s", &codigo_carta);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", &cidade);

        printf("Digite o nr de habitantes: ");
        scanf("%i", &populacao);

        printf("Digite a area da cidade em Km2: ");
        scanf("%f", &area);

        printf("Digite o PIB da cidade em Bilhoes de Reais: ");
        scanf("%f", &pib);

        printf("Digite o nr de Pontos Turisticos: ");
        scanf("%i", &pontos_turisticos);

        printf("\n");

// Inserindo dados da Carta 2:
        printf ("CADASTRO DA CARTA 2 \n\n");

        printf("Digite a Inicial do Estado: ");
        scanf ("%s", &estado2);

        printf("Digite o codigo da Carta. Com 2 digitos, exemplo (01, 03): ");
        scanf("%s", &codigo_carta2);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", &cidade2);

        printf("Digite o nr de habitantes: ");
        scanf("%i", &populacao2);

        printf("Digite a area da cidade em Km2: ");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade em Bilhoes de Reais: ");
        scanf("%f", &pib2);

        printf("Digite o nr de Pontos Turisticos: ");
        scanf("%i", &pontos_turisticos2);

        printf("--------------------\n");

// Imprimindo dados da Carta 1:
        printf("CARTA 1:\n");
        printf("Estado: %s\n", estado);
        printf("Codigo da Carta: %s%s\n", estado, codigo_carta);
        printf("Nome da Cidade: %s\n", cidade);
        printf("Populacao: %i\n", populacao);
        printf("Area: %.2f km2\n", area);
        printf("PIB: %.2f Bilhoes de Reais\n", pib);
        printf("Nr de Pontos Turisticos: %i\n", pontos_turisticos);

        densidade_populacional = (float) populacao / area; // Calculando densidade populacional da Carta 1
        printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional);

        pib_percapita =  (float) (pib*1000000000) / populacao; // Calculando PIB per Capita da Carta 1
        printf("PIB per Capita: R$ %.2f\n", pib_percapita);

        printf("--------------------\n");

// Imprimindo dados da Carta 2:
        printf("CARTA 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Codigo da Carta: %s%s\n", estado2, codigo_carta2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("Populacao: %i\n", populacao2);
        printf("Area: %.2f km2\n", area2);
        printf("PIB: %.2f Bilhoes de Reais\n", pib2);
        printf("Nr de Pontos Turisticos: %i\n", pontos_turisticos2);

        densidade_populacional2 = (float) populacao2 / area2; // Calculando densidade populacional da Carta 2
        printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);

        pib_percapita2 = (float) (pib2*1000000000) / populacao2; // Calculando PIB per Capita da Carta 2
        printf("PIB per Capita: R$ %.2f\n", pib_percapita2);

        printf("--------------------\n");

        return 0;
}
