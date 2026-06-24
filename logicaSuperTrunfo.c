#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[3]; // sigla do estado da carta 1
    char estado2[3]; // sigla do estado da carta 2
    char codigo_carta1[3]; // código em números da carta 1 
    char codigo_carta2[3]; // código em números da carta 2 
    char codigo_completo1[8]; // junção da sigla com código em números da carta 1
    char codigo_completo2[8]; // junção da sigla com código em números da carta 2 
    char nome_cidade1[50];
    char nome_cidade2[50]; 
    unsigned long int populacao1, populacao2; 
    float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2;
    int num_pts_turisticos1, num_pts_turisticos2;
    
    // Cadastro das Cartas:
            // entrada dos dados da carta #1
            printf("Digite a sigla do estado da carta 1 (ex.: Pará --> PA): \n");
            scanf("%s", estado1); // lê a sigla do estado da carta #1
            
            printf("Digite o código da carta 1 (entre 01 e 04) *somente números*: \n");
            scanf("%s", codigo_carta1); // lê  o código da carta #1
                sprintf(codigo_completo1, "%s%s", estado1, codigo_carta1); // concatena a sigla e o código da carta #1
           
            printf("Digite o nome da cidade da carta 1: \n");
            fgets(nome_cidade1, 50, stdin); // lê o nome da cidade;
                nome_cidade1[strcspn(nome_cidade1, "\n")] = 0; // remove o caractere de nova linha
                gets(nome_cidade1);
            
            printf("Digite a população da cidade da carta 1 *somente números*: \n");
            scanf("%lu", &populacao1); // lê e armazena a populacao da cidade da carta 1
            
            printf("Digite a área da cidade (em km²) da carta 1 *somente números: \n");
            scanf("%f", &area1); // lê e armazena a área da cidade da carta 1
            
            printf("Digite o PIB da cidade (em bilões de reais) da carta 1 *somente números*: \n");
            scanf("%f", &pib1); // lê e armezena o pib da cidade da carta 1
            
            printf("Digite o número de pontos turísticos da cidade da carta 1: \n");
            scanf("%d", &num_pts_turisticos1); // lê e armazena o num de pts turísticos da carta 1

            printf("\n\n\n"); // espaço usado para que o usuário veja com mais clareza a separação de entrada dos dados da carta



            // entrada dos dados da carta 2#
            printf("Digite a sigla do estado da carta 2 (ex.: Pará --> PA): \n");
            scanf("%s", estado2); // lê a sigla do estado da carta #2
            
            printf("Digite o código da carta 2 (entre 01 e 04) *somente números*: \n");
            scanf("%s", codigo_carta2); // lê  o código da carta #2
                sprintf(codigo_completo2, "%s%s", estado2, codigo_carta2); // concatena a sigla e o código da carta #2
            
            printf("Digite o nome da cidade da carta 2: \n");
            fgets(nome_cidade2, 50, stdin); // lê o nome da cidade;
                nome_cidade2[strcspn(nome_cidade2, "\n")] = 0; // remove o caractere de nova linha
                gets(nome_cidade2);
            
            printf("Digite a população da cidade da carta 2 *somente números*: \n");
            scanf("%lu", &populacao2); // lê e armazena a populacao da cidade da carta 2
            
            printf("Digite a área da cidade (em km²) da carta 2 *somente números: \n");
            scanf("%f", &area2); // lê e armazena a área da cidade da carta 1
            
            printf("Digite o PIB da cidade (em bilões de reais) da carta 2 *somente números*: \n");
            scanf("%f", &pib2); // lê e armezena o pib da cidade da carta 1
            
            printf("Digite o número de pontos turísticos da cidade da carta 2: \n");
            scanf("%d", &num_pts_turisticos2); // lê e armazena o num de pts turísticos da carta 2

            printf("\n\n\n"); /*espaço usado para que o usuário veja com mais clareza a separação da entrada dos dados das cartas
            e a exibição destas de forma organizada.*/ 



    // cálculo da densidade populacional e do PIB per capita para carta #1
    densidade_populacional1 = (float)populacao1 / area1; // calcula a densidade populacional da cidade da carta 1
    pib_per_capita1 = pib1 * 1000000000 / populacao1; 
    /* calcula o PIB per capita da carta 1 multiplicado por bilhão, pois, 
    foi solicitado o dado em bilões de reais para usuário */

    // cálculo da densidade populacional e do PIB per capita para carta #2
    densidade_populacional2 = (float)populacao2 / area2; // calcula a densidade populacional da cidade da carta 2
    pib_per_capita2 = pib2 * 1000000000 / populacao2; 
    /* calcula o PIB per capita da carta 2 multiplicado por bilhão, pois, 
    foi solicitado o dado em bilões de reais para usuário */

    // área para exibição dos dados das cidades
// exibição dos dados da carta 1

printf("\n-- Carta 1 --\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Nome da cidade: %s\n"
        "População: %lu habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n", estado1, codigo_completo1, nome_cidade1, populacao2,
        area1, pib1, num_pts_turisticos1, densidade_populacional1, pib_per_capita1);


// exibição dos dados da carta 2

printf("\n\n\n-- Carta 2 --\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Nome da cidade: %s\n"
        "População: %lu habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n", estado2, codigo_completo2, nome_cidade2, populacao2,
        area2, pib2, num_pts_turisticos2, densidade_populacional2, pib_per_capita2);

/*comparação somente de um atributo entre as cartas para determinar 
a vencedora e a exibição dos resultados da comparação pela função if-else*/

printf("\n\n\n--- Comparação de Cartas (Atributo: População): ---\n");

    if (populacao1 > populacao2) {
        printf("\nCarta 1 - %s (%s): %lu\nCarta 2 - %s (%s): %lu\nResultado: Carta 1 (%s) venceu!\n\n", 
        nome_cidade1, estado1, populacao1, nome_cidade2, estado2, populacao2, nome_cidade1); 
        /*se a comparação for verdadeira, exibirá a carta 1 como vencedora*/
    } else {
        printf("\nCarta 1 - %s (%s): %lu\nCarta 2 - %s (%s): %lu\nResultado: Carta 2 (%s) venceu!\n\n", 
        nome_cidade1, estado1, populacao1, nome_cidade2, estado2, populacao2, nome_cidade2);
        /*se a comparação for falsa, exibirá a carta 2 como vencedora*/
    }
    

    return 0;
}
