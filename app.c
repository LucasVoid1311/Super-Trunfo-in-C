#include <stdio.h>

int main() {
    
    // Criação de variáveis para a primeira carta
    
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;

    // recebendo os valores para as variáveis declaradas anteriormente
    
    printf("Escolha uma letra de A a H para a primeira carta:\n");
    scanf(" %c", &estado1);
    getchar();
    
    printf("Digite o código do primeiro estado:\n");
    fgets(codigo1, 10, stdin); // fgets salva "\n" na variável edeixa o código feio, 
                               // mas foi a única maneira que encontrei para receber o valor das cidades
    
    printf("Digite a primeira cidade:\n");
    fgets(cidade1, 50, stdin);
    
    printf("Digite a população da primeira cidade:\n");
    scanf(" %d", &populacao1);
    getchar();
    
    printf("Digite a área da primeira cidade:\n");
    scanf(" %f", &area1);
    getchar();
    
    printf("Digite o PIB da primeira cidade:\n");
    scanf(" %f", &pib1);
    getchar();
    
    printf("Digite o número de pontos turísticos da primeira cidade:\n");
    scanf(" %d", &turistico1);
    getchar();
    
    // Criação de variáveis para a segunda carta
    
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    
    //Recebendo os valores para as variáveis da segunda carta que foram declaradas
    
    printf("Escolha uma letra de A a H para a segunda carta:\n");
    scanf(" %c", &estado2);
    getchar();
    
    printf("Digite o código do segundo estado:\n");
    fgets(codigo2, 10, stdin);
    
    printf("Digite a segunda cidade:\n");
    fgets(cidade2, 50, stdin);
    
    printf("Digite a população da segunda cidade:\n");
    scanf(" %d", &populacao2);
    getchar();
    
    printf("Digite a área da segunda cidade:\n");
    scanf(" %f", &area2);
    getchar();
    
    printf("Digite o PIB da segunda cidade:\n");
    scanf(" %f", &pib2);
    getchar();
    
    printf("Digite o número de pontos turísticos da segunda cidade:\n");
    scanf(" %d", &turistico2);
    getchar();
    
    // Cálculo que acredito que esteja certo
    
    float densi_pop1 = (float) (populacao1 / area1);
    float pib_p_capita1 = (float) (pib1 * 1000000000) / populacao1;

    float densi_pop2 = (float) (populacao2 / area2);
    float pib_p_capita2 = (float) (pib2 * 1000000000) / populacao2;
    
    // Isso foi pedido no desafio Aventureiro do Tem 1 mas ainda não existe utilização clara (ou eu não entendi)
    
    unsigned long int densi_PIB1 = densi_pop1 + pib_p_capita1;
    unsigned long int densi_PIB2 = densi_pop2 + pib_p_capita2;
    
    // Calculando o Super Poder das duas cartas (não sei se o cálculo está certo)
    
    float super_power1 = (float) (populacao1 + area1 + pib1 + turistico1 + pib_p_capita1) / densi_pop1;
    float super_power2 = (float) (populacao2 + area2 + pib2 + turistico2 + pib_p_capita2) / densi_pop2;
    
    // Retornando os valores para o usuário da primeira carta
    
    printf("\nCarta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_p_capita1);
    printf("Super poder: %.2f\n\n", super_power1);
    
    // Retornando os valores para o usuário da segunda vcarta
    
    printf("\nCarta: 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld habitantes\n", populacao2);
    printf("Area: %.2f Km².\n", area2);
    printf("PIB: %.2f bilhões de reais.\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_p_capita2);
    printf("Super poder: %.2f\n", super_power2);
    
    // Comparação das duas cartas e, retornando o resultado em booleano
    
    printf("\nComparação de cartas:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", turistico1 > turistico2);
    printf("Densidade Populacional: %d\n", densi_pop1 < densi_pop2);
    printf("PIB per Capita: %d\n", pib_p_capita1 > pib_p_capita2);
    printf("Super Poder: %d\n", super_power1 > super_power2);
    
    // Comparando apenas um atributo das cartas 
    
    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s: %d\n", cidade1, populacao1); // Nesse momento, podemos ver 
    printf("Carta 2 - %s: %d\n", cidade2, populacao2); // problema causado pelo "fgets"
    
    // Retornando o resultado da comparação acima utilizando o If/Else
    
    if (populacao1 > populacao2) {
        printf("Resultado: Cartta 1 (%s) venceu!\n", cidade1);
    }
    else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    
    // Fechar programa
    
    return 0;
}