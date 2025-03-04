#include <stdio.h>

int main(){
    char letraA[4]; //a letra A(maiscula) representa a carta 1 e a letra B(maiuscula) a carta 2
    char codigoA[7]; 
    char cidadeA[25]; 
    int populacaoA, turisticoA;
    float areaA, pibA, DensidadeA, PibPopA;

    char letraB[4]; 
    char codigoB[7]; 
    char cidadeB[25]; 
    int populacaoB, turisticoB;
    float areaB, pibB, DensidadeB, PibPopB;

    //entrada de dados pelo usuário do primeiro estado
    printf("Dados de entrada da carta 1:\n");

    printf("Digite a letra do primeiro estado de A a H:\n");
    scanf("%s", letraA);
    
    printf("Digite o codigo do estado letra mais o numero de 01 a 04:\n");
    scanf("%s", codigoA);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidadeA);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &populacaoA);

    printf("Digite a area territorial:\n");
    scanf("%f", &areaA);

    printf("Digite o valor do pib:\n");
    scanf("%f", &pibA);

    printf("Digite o numero de pontos turisticos na cidade:\n");
    scanf("%d", &turisticoA);


    //entrada de dados pelo usuário do segundo estado
    printf("Dados de entrada da carta 2:\n");

    printf("Digite a letra do segundo estado de A a H:\n");
    scanf("%s", letraB);

    printf("Digite o codigo do estado letra mais o numero de 01 a 04:\n");
    scanf("%s", codigoB);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidadeB);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &populacaoB);

    printf("Digite a area territorial:\n");
    scanf("%f", &areaB);

    printf("Digite o valor do pib:\n");
    scanf("%f", &pibB);

    printf("Digite o numero de pontos turisticos na cidade:\n");
    scanf("%d", &turisticoB);

    //acréscimo da densidade populacional e do PIB per capita
    DensidadeA = (float) populacaoA / areaA;
    PibPopA = (float) pibA / populacaoA;

    DensidadeB = (float) populacaoB / areaB;
    PibPopB = (float) pibB / populacaoB;

     //leitura na tela dos dados do primeiro estado
     printf("Carta 1:\n");
     printf("Estado: %s\n", letraA);
     printf("Codigo: %s\n",codigoA);
     printf("Nome do estado: %s\n", cidadeA);
     printf("Populacao: %d\n", populacaoA);
     printf("Area: %.2f km^2\n", areaA);
     printf("Pib: %.2f reais\n", pibA);
     printf("Pontos turisticos: %d\n", turisticoA);
     printf("Densidade Populacional: %.2f hab/km^2\n",DensidadeA);
     printf("Pib per capita: %.2f reais\n", PibPopA);

     //leitura na tela dos dados do segundo estado
     printf("Carta 2:\n");
     printf("Estado: %s\n", letraB);
     printf("Codigo: %s\n",codigoB);
     printf("Nome do estado: %s\n", cidadeB);
     printf("Populacao: %d\n", populacaoB);
     printf("Area: %.2f km^2\n", areaB);
     printf("Pib: %.2f reais\n", pibB);
     printf("Pontos turisticos: %d\n", turisticoB);
     printf("Densidade Populacional: %.2f hab/km^2\n",DensidadeB);
     printf("Pib per capita: %.2f reais\n", PibPopB);


    return 0;
}