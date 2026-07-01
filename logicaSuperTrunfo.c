#include <stdio.h>

// Desafio Super Trunfo - Cidades
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
    int num_pts_turisticos1, num_pts_turisticos2, escolhaAtributo;
    
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

printf("\n\n\n"); // espaço usado para que o usuário veja com mais clareza a separação dos dados das cartas e do menu interativo


/*área para exibição de menu interativo para escolher qual atributo 
será comparado no jogo*/

//Regras das comparações 
printf("### COMPARE AS CARTAS ###\n");
printf("Escolha uma atributo para comparar as cartas:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
printf("Digite abaixo sua opção: \n");
scanf("%d", &escolhaAtributo);


/*lógica implementada para comparação das cartas segundo
o atributo escolhido pelo usuário*/

    switch (escolhaAtributo)
    {
    case 1: // escolha do atributo POPULAÇAO para comparação
        if (populacao1 == populacao2){
            printf("\n\n### Empate! ###\n"
                    "A cidade %s tem %d habitantes e a cidade %s tem %d habitantes.\n"
                    "Portanto, ambas as cartas possuem o mesmo valor do atributo POPULAÇÃO.", nome_cidade1, populacao1, nome_cidade2, populacao2);
        } else if (populacao1 > populacao2){
            printf("\n\n### A carta 1 venceu ###\n"
                    "Atributo: População\n"
                    "%s: %d hab.\n"
                    "%s: %d hab.\n", nome_cidade1, populacao1, nome_cidade2, populacao2);
        } else if (populacao1 < populacao2){
            printf("\n\n### A carta 2 venceu ###\n"
                    "Atributo: População\n"
                    "%s: %d hab.\n"
                    "%s: %d hab.\n", nome_cidade1, populacao1, nome_cidade2, populacao2);
        }
        break;

    case 2: // escolha do atributo ÁREA para comparação
        if (area1 == area2){
            printf("\n\n### Empate! ###\n"
                    "A cidade %s tem %.2f km² e a cidade %s tem %.2f km².\n"
                    "Portanto, ambas as cartas possuem o mesmo valor do atributo ÁREA.", nome_cidade1, area1, nome_cidade2, area2);
        } else if (area1 > area2){
            printf("\n\n### A carta 1 venceu ###\n"
                    "Atributo: Área\n"
                    "%s: %.2f km²\n"
                    "%s: %.2f\n km²", nome_cidade1, area1, nome_cidade2, area2);
        } else if (populacao1 < populacao2){
            printf("\n\n### A carta 2 venceu ###\n"
                    "Atributo: Área\n"
                    "%s: %.2f km²\n"
                    "%s: %.2f km²\n", nome_cidade1, area1, nome_cidade2, area2);
        }
        break;
    
    case 3: // escolha do atributo PIB para comparação
        if (pib1 == pib2){
            printf("\n\n### Empate! ###\n"
                    "A cidade %s tem R$ %.2f bilhões e a cidade %s tem R$ %.2f bilhões.\n"
                    "Portanto, ambas as cartas possuem o mesmo valor do atributo PIB.", nome_cidade1, pib1, nome_cidade2, pib2);
        } else if (pib1 > pib2){
            printf("\n\n### A carta 1 venceu ###\n"
                    "Atributo: PIB\n"
                    "%s: %.2f bilhões de reais\n"
                    "%s: %.2f\n bilhões de reais", nome_cidade1, pib1, nome_cidade2, pib2);
        } else if (pib1 < pib2){
            printf("\n\n### A carta 2 venceu ###\n"
                    "Atributo: PIB\n"
                    "%s: %.2f bilhões de reais\n"
                    "%s: %.2f bilhões de reais\n", nome_cidade1, pib1, nome_cidade2, pib2);
        }
        break;

    case 4: // escolha do atributo N# PONTOS TURÍSTICOS para comparação
        if (num_pts_turisticos1 == num_pts_turisticos2){
            printf("\n\n### Empate! ###\n"
                    "A cidade %s tem %d pontos turísticos e a cidade %s tem %d pontos turísticos.\n"
                    "Portanto, ambas as cartas possuem o mesmo valor do atributo NÚMERO DE PONTOS TURÍSTICOS.", nome_cidade1, num_pts_turisticos1, nome_cidade2, num_pts_turisticos2);
        } else if (num_pts_turisticos1 > num_pts_turisticos2){
            printf("\n\n### A carta 1 venceu ###\n"
                    "Atributo: Número de pontos turísticos\n"
                    "%s: %d pontos turísticos\n"
                    "%s: %d pontos turísticos", nome_cidade1, num_pts_turisticos1, nome_cidade2, num_pts_turisticos2);
        } else if (num_pts_turisticos1 < num_pts_turisticos2){
            printf("\n\n### A carta 2 venceu ###\n"
                    "Atributo: Números de pontos turísticos\n"
                    "%s: %d pontos turísticos\n"
                    "%s: %d pontos turísticos\n", nome_cidade1, num_pts_turisticos1, nome_cidade2, num_pts_turisticos2);
        }
        break;

    case 5: // escolha do atributo DENSIDADE POPULACIONAL para comparação
        if (densidade_populacional1 == densidade_populacional2){
            printf("\n\n### Empate! ###\n"
                    "A cidade %s tem %.2f hab/km². e a cidade %s tem %.2f hab/km².\n"
                    "Portanto, ambas as cartas possuem o mesmo valor do atributo DENSIDADE EDEMOGRÁFICA.", nome_cidade1, densidade_populacional1, nome_cidade2, densidade_populacional2);
        } else if (densidade_populacional1 < densidade_populacional2){
            printf("\n\n### A carta 1 venceu ###\n"
                    "Atributo: Densidade Populacional\n"
                    "%s: %.2f hab/km²\n"
                    "%s: %.2f hab/km²\n", nome_cidade1, densidade_populacional1, nome_cidade2, densidade_populacional2);
        } else if (densidade_populacional1 > densidade_populacional2){
            printf("\n\n### A carta 2 venceu ###\n"
                    "Atributo: Densidade Populacional\n"
                    "%s: %.2f hab/km²\n"
                    "%s: %.2f hab/km¹\n", nome_cidade1, densidade_populacional1, nome_cidade2, densidade_populacional2);
        }
        break;
    default:
        printf("\n\nSeleção de atributo inválido.\n"
                "Insira uma opção válida.\n\n");
        break;
    }

    return 0;
}
