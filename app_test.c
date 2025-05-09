#include <stdio.h>
#include <string.h>

int main() {
    
    // Declarando as variáveis
/*    
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
*/
    int opcao, opcao2;
    int i, j;
    char estado1 = 'A', estado2 = 'B';
    char codigo1[] = "A01", codigo2[] = "B02";
    char cidade1[] = "São Paulo", cidade2[] = "Rio de Janeiro";
    unsigned long int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int turistico1 = 50, turistico2 = 30;

    // Cálculo que acredito que esteja certo
        
    float densi_pop1 = (float) (populacao1 / area1);
    float pib_p_capita1 = (float) (pib1 * 1000000000) / populacao1;
    
    float densi_pop2 = (float) (populacao2 / area2);
    float pib_p_capita2 = (float) (pib2 * 1000000000) / populacao2;
            
    // Calculando o Super Poder das duas cartas (não sei se o cálculo está certo)
            
    float super_power1 = (float) populacao1 + area1 + pib1 + turistico1 + pib_p_capita1 + (1 / densi_pop1);
    float super_power2 = (float) populacao2 + area2 + pib2 + turistico2 + pib_p_capita2 + (1 / densi_pop2);
    
    // Menu Principal
    do {
        printf("Menu Principal\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Ver gabarito\n");
        printf("3. Ver Regras\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao){

            case 1:

                // recebendo os valores para as variáveis declaradas anteriormente
    /*    
                // Entrada de dados da primeira carta
                printf("Escolha uma letra de A a H para a primeira carta:\n");
                scanf(" %c", &estado1);
                getchar();

                printf("Digite o código do primeiro estado:\n");
                fgets(codigo1, sizeof(codigo1), stdin);
                codigo1[strcspn(codigo1, "\n")] = 0; // Remove o \n armazenado pelo fgets

                // Entrada da primeira cidade
                printf("Digite a primeira cidade:\n");
                fflush(stdin); // Certifique-se de limpar o buffer antes de ler a string
                fgets(cidade1, sizeof(cidade1), stdin);
                cidade1[strcspn(cidade1, "\n")] = 0; // Remove o \n armazenado pelo fgets

                printf("Digite a população da primeira cidade:\n");
                scanf("%lu", &populacao1);
                getchar();

                printf("Digite a área da primeira cidade:\n");
                scanf("%f", &area1);
                getchar();

                printf("Digite o PIB da primeira cidade:\n");
                scanf("%f", &pib1);
                getchar();

                printf("Digite o número de pontos turísticos da primeira cidade:\n");
                scanf("%d", &turistico1);
                getchar();

                // Entrada de dados da segunda carta
                printf("Escolha uma letra de A a H para a segunda carta:\n");
                scanf(" %c", &estado2);
                getchar();

                printf("Digite o código do segundo estado:\n");
                fgets(codigo2, sizeof(codigo2), stdin);
                codigo2[strcspn(codigo2, "\n")] = 0; // Remove o \n armazenado pelo fgets

                // Entrada da segunda cidade
                printf("Digite a segunda cidade:\n");
                fgets(cidade2, sizeof(cidade2), stdin);
                cidade2[strcspn(cidade2, "\n")] = 0; // Remove o \n armazenado pelo fgets

                printf("Digite a população da segunda cidade:\n");
                scanf("%lu", &populacao2);
                getchar();

                printf("Digite a área da segunda cidade:\n");
                scanf("%f", &area2);
                getchar();

                printf("Digite o PIB da segunda cidade:\n");
                scanf("%f", &pib2);
                getchar();

                printf("Digite o número de pontos turísticos da segunda cidade:\n");
                scanf("%d", &turistico2);
                getchar();
    */            
                // Definindo escolhas de opções para comparações em switch case

                do {
                    printf("\nEscolha algum atributo para comparar de forma separada.\n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turísticos\n");
                    printf("5. Densidade Populacional\n");
                    printf("6. PIB per Capita\n");
                    printf("7. Super Poder\n");
                    printf("0. Sair\n"); // É PRECISO ADICIONAR A FUNCIONALIDADE
                    scanf("%d", &opcao2);


                    switch (opcao2) {

                        case 1:

                            printf("\nComparação de cartas (Atributo: População):\n\n");
                            printf("Carta 1 - %s: %d\n", cidade1, populacao1); // Nesse momento, podemos ver o
                            printf("Carta 2 - %s: %d\n", cidade2, populacao2); // problema causado pelo "fgets"

                            // Retornando o resultado da comparação acima utilizando o If/Else
                            
                            if (populacao1 > populacao2) {
                                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                            }else {
                                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                            }
                            break;
                        
                        case 2:

                            printf("\nComparação de cartas (Atributo: Área):\n\n");
                            printf("Carta 1 = %s: %.2f\n", cidade1, area1);
                            printf("Carta 2 = %s: %.2f\n", cidade2, area2);

                            if (area1 > area2) {
                                printf("Resultado Carta 1 (%s) venceu!\n", cidade1);
                            }else {
                                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                            }
                            break;

                        case 3:

                            printf("\nComparação de cartas (Atributo: PIB):\n\n");
                            printf("Carta 1 = %s: %.2f\n", cidade1, pib1);
                            printf("Carta 2 = %s: %.2f\n", cidade2, pib2);

                            if (pib1 > pib2) {
                                printf("Resultado Carta 1 (%s) venceu!\n", cidade1);
                            }else {
                                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                            }
                            break;

                        case 4:

                            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n\n");
                            printf("Carta 1 = %s: %d\n", cidade1, turistico1);
                            printf("Carta 2 = %s: %d\n", cidade2, turistico2);

                            if (turistico1 > turistico2) {
                                printf("Resultado Carta 1 (%s) venceu!\n", cidade1);
                            }else {
                                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                            }
                            break;

                        case 5:

                            printf("\nComparação de cartas (Atributo: Densidade Populacional):\n\n");
                            printf("Carta 1 = %s: %.2f\n", cidade1, densi_pop1);
                            printf("Carta 2 = %s: %.2f\n", cidade2, densi_pop2);

                            if (densi_pop1 < densi_pop2) { 
                                printf("Resultado Carta 1 (%s) venceu!\n", cidade1);
                            }else {
                                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                            }
                            break;

                        case 6:

                            printf("\nComparação de cartas (Atributo: PIB per Capita):\n\n");
                            printf("Carta 1 = %s: %.2f\n", cidade1, pib_p_capita1);
                            printf("Carta 2 = %s: %.2f\n", cidade2, pib_p_capita2);

                            if (pib_p_capita1 > pib_p_capita2) { 
                                printf("Resultado Carta 1 (%s) venceu!\n", cidade1);
                            }else {
                                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                            }
                            break;

                        case 7:
                        
                            printf("\nComparação de cartas (Atributo: *SUPER PODER*):\n\n");
                            printf("Carta 1 = %s: %.2f\n", cidade1, super_power1);
                            printf("Carta 2 = %s: %.2f\n", cidade2, super_power2);

                            if (super_power1 > super_power2) {
                                printf("Resultado Carta 1 (%s) venceu!\n", cidade1);
                            }else {
                                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                            }
                            break;
                        
                        case 0: 
                            printf("Saindo...\n");
                            break;

                        default:

                            printf("Entrada inválida! Por favor, tente novamente.\n");
                            break;
                    }

                } while(opcao2 != 0);
                break;

            case 2:
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
                printf("Super poder: %.2f\n", super_power1);
                
                // Retornando os valores para o usuário da segunda carta
                
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
                break;

            case 3:
                printf("Para conseguir jogar você vai precisar:\n -Ler o que o jogo está pedindo;\n -Adicionar os valores pedidos;\n - Utilizar o ponto (.) ao invés de (,) para informar os valores.\n");
                break;

            case 4:
                printf("Saindo do jogo...");
                break;

            default:
                printf("Opção inválida. Por favor, reinicie o jogo e tente novamente.");
                break;
        }
    } while (opcao != 4);
    // Fechar programa
    
    return 0;
}