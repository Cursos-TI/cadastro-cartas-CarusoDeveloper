#include <stdio.h>


int main() {
    //declaração das variáveis das duas cartas
    char estado_1[20], estado_2[20];
    char codigo_1[20], codigo_2[20];
    char cidade_1[20], cidade_2[20];
    double area_1, area_2;
    double pib_1, pib_2;
    double densidade1, densidade2;
    double pibcapita1, pibcapita2;
    int populacao_1, populacao_2;
    int pontos_turisticos_1, pontos_turisticos_2;

    printf("==========================================\n");
    printf("         SUPER TRUNFO - CIDADES \n");
    printf("==========================================\n");
    printf("\nBem-vindo ao jogo Super Trunfo de Países!\n");
    printf("Neste jogo, você vai cadastrar duas cartas\n");
    printf("com informações sobre cidades.\n");
   
    printf("\n");

   
    //Coleta dados da carta 1
    printf("Insira os dados da carta 1: \n");
    printf("Digite o Estado: ");
    scanf("%s", &estado_1);

    printf("Digite o Código: ");
    scanf("%s", &codigo_1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade_1);

    printf("Digite o Número de Habitantes: ");
    scanf("%d", &populacao_1);

    printf("Digite a Área: ");
    scanf("%lf", &area_1);

    printf("Digite a PIB: ");
    scanf("%lf", &pib_1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_1);

        //faz o cálculo do PIB per Capita, e também a Densidade Populacional da cidade 1
    pibcapita1 = (pib_1 * 1000000000) / populacao_1;
    densidade1 = populacao_1 / area_1;


    printf("\n");

    //Coleta dados da carta 2
    printf("Insira os dados da carta 2:\n");
    printf("Digite o Estado: ");
    scanf("%s", &estado_2);

    printf("Digite o Código: ");
    scanf("%s", &codigo_2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade_2);

    printf("Digite o Número de Habitantes: ");
    scanf("%d", &populacao_2);

    printf("Digite a Área: ");
    scanf("%lf", &area_2);

    printf("Digite a PIB: ");
    scanf("%lf", &pib_2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_2);

    //faz o cálculo do PIB per Capita, e também a Densidade Populacional da cidade 2
    pibcapita2 = (pib_2 * 1000000000) / populacao_2;
    densidade2 = populacao_2 / area_2;

    printf("\n");

    //Aviso de Fim de Cadastro
    printf("\n==========================================\n");
    printf("        Fim do Cadastro das Cartas\n");
    printf("==========================================\n");
    printf("Agora vamos ver as cartas que você criou!\n");

    printf("\n");

    // Exibição das cartas cadastradas
    //Carta 1
    printf("Carta 1: ");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f Bilhões de Reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);


    printf("\n");
    
    //Carta 2
    printf("Carta 2: ");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f Bilhões de Reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);


    return 0;
}