#include <stdio.h>

int main(){
    char letraA[4]; //a letra A(maiscula) representa a carta 1 e a letra B(maiuscula) a carta 2
    char codigoA[7]; //declaração das variáveis carta 1
    char cidadeA[25]; //
    int populacaoA, turisticoA;
    float areaA, pibA;

    char letraB[4]; //declaração das variáveis carta 2
    char codigoB[7]; 
    char cidadeB[25]; 
    int populacaoB, turisticoB;
    float areaB, pibB;

    //dados inseridos pelo usuário referente a carta 1

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

    //dados inseridos pelo usuário referente a carta 2

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

     //leitura na tela dos dados da primeira carta
     printf("Carta 1:\n");
     printf("Estado: %s\n", letraA);
     printf("Codigo: %s\n",codigoA);
     printf("Nome do estado: %s\n", cidadeA);
     printf("Populacao: %d\n", populacaoA);
     printf("Area: %f km^2\n", areaA);
     printf("Pib: %f reais\n", pibA);
     printf("Pontos turisticos: %d\n", turisticoA);


     //leitura na tela dos dados da segunda carta
     printf("Carta 2:\n");
     printf("Estado: %s\n", letraB);
     printf("Codigo: %s\n",codigoB);
     printf("Nome do estado: %s\n", cidadeB);
     printf("Populacao: %d\n", populacaoB);
     printf("Area: %f km^2\n", areaB);
     printf("Pib: %f reais\n", pibB);
     printf("Pontos turisticos: %d\n", turisticoB);


    return 0;
}