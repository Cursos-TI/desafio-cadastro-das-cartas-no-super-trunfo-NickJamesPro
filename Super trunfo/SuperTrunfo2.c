#include <stdio.h>
#include <string.h>

int main()
{   // Declaração de variáveis para a Carta 1
    int populacao1, pontos_turisticos1;
    float area1, PIB_per_capita1;
    float pib1, Densidade_populacional1;
    char cidade1[100], estado1[100], codigo_da_carta1[100];

    // Declaração de variáveis para a Carta 2
    int populacao2, pontos_turisticos2;
    float area2, PIB_per_capita2;
    float pib2, Densidade_populacional2;
    char cidade2[100], estado2[100], codigo_da_carta2[100];

     // Carta 1
    printf("Dados da Carta 1\n");
    printf("Digite o nome da cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin); //É usada para ler uma string (linha de texto) de um arquivo ou da entrada padrão (como o teclado) de maneira segura, evitando estouro de buffer
    cidade1[strcspn(cidade1, "\n")] = '\0'; //strcspn() é uma função que retorna o tamanho da string, excluindo o caractere de nova linha

    printf("Digite o estado:\n");
    fgets(estado1, sizeof(estado1), stdin); //sizeof() é uma função que retorna o tamanho em bytes de um tipo de dado ou variável, Stdin é um arquivo de entrada padrão (teclado).
    estado1[strcspn(estado1, "\n")] = '\0';

    printf("Digite o código da carta:\n");
    fgets(codigo_da_carta1, sizeof(codigo_da_carta1), stdin);
    codigo_da_carta1[strcspn(codigo_da_carta1, "\n")] = '\0';

    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    getchar();//A função getchar() é usada para ler o próximo caractere do buffer de entrada padrão e retorná-lo como um valor int.

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB (em milhões):\n");
    scanf("%f", &pib1);
    getchar();

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);
    getchar();
    printf("\n");

    // Cálculo da densidade populacional
   printf("densidade_populacional1 = populacao1 / area1;\n");
    // A densidade populacional é calculada como população dividida pela área
    Densidade_populacional1 = populacao1 / area1;
    printf("Densidade populacional: %.2f\n", Densidade_populacional1);
    printf("\n");

    // Cálculo do PIB per capita
   
    printf(" PIB_per_capita1 = pib1 / populacao1;\n");
    PIB_per_capita1 = pib1 / populacao1;
    printf("PIB per capita: %.2f\n", PIB_per_capita1);
    printf("\n");

    // Carta 1
    printf("Carta1\nCidade: %s\nEstado: %s\nCodigo da carta: %s\nPopulação: %d \nÁrea: %.2f(km²)\nPIB: %.2f(milhões)\nPontos turísticos: %d\nDensidade populacional: %f\nPIB per capita: %.2f\n",
        cidade1, estado1, codigo_da_carta1, populacao1, area1, pib1, pontos_turisticos1, Densidade_populacional1, PIB_per_capita1);
    printf("\n");

    

    // Carta 2
    printf("Dados da Carta 2\n");
    printf("Digite o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite o estado:\n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o código da carta:\n");
    fgets(codigo_da_carta2, sizeof(codigo_da_carta2), stdin);
    codigo_da_carta2[strcspn(codigo_da_carta2, "\n")] = '\0';

    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB (em milhões):\n");
    scanf("%f", &pib2);
    getchar();

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);
    getchar();
    printf("\n");
    // Cálculo da densidade populacional
    printf("densidade_populacional2 = populacao2 / area2;\n");
    Densidade_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", Densidade_populacional2);
    printf("\n");

    // Cálculo do PIB per capita
    printf(" PIB_per_capita2 = pib2 / populacao2;\n");
    PIB_per_capita2 = pib2 / populacao2;
    printf("PIB per capita: %.2f\n", PIB_per_capita2);
    printf("\n");

    // Carta 2
    printf("Carta2\nCidade: %s\nEstado: %s\nCodigo da carta: %s\nPopulação: %d\nÁrea: %.2f(km²)\nPIB: %.2f(em milhões)\nPontos turísticos: %d\nDensidade populacional: %f\nPIB per capita: %.2f\n",
        cidade2, estado2, codigo_da_carta2, populacao2, area2, pib2, pontos_turisticos2, Densidade_populacional2, PIB_per_capita2);
    printf("\n");

    return 0;
}