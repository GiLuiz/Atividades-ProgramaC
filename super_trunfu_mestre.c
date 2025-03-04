#include <stdio.h>

int main(){
   char letraA[4]; //a letra A(maiscula) representa a carta 1 e a letra B(maiuscula) a carta 2
   char codigoA[7]; 
    char cidadeA[25]; 
    int turisticoA;
    unsigned long int populacaoA;
    float areaA, pibA, DensidadeA, PibPopA;
    float SuperPoderA;

    char letraB[4]; 
    char codigoB[7]; 
    char cidadeB[25]; 
    int turisticoB;
    unsigned long int populacaoB;
    float areaB, pibB, DensidadeB, PibPopB;
    float SuperPoderB;

    //dados de entrada do primeiro estado

    printf("Dados de entrada da carta 1:\n");

    printf("Digite a letra do primeiro estado de A a H:\n");
    scanf("%s", letraA);
    
    printf("Digite o codigo do estado letra mais o numero de 01 a 04:\n");
    scanf("%s", codigoA);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidadeA);

    printf("Digite o numero de habitantes:\n");
    scanf("%lu", &populacaoA);

    printf("Digite a area territorial:\n");
    scanf("%f", &areaA);

    printf("Digite o valor do pib:\n");
    scanf("%f", &pibA);

    printf("Digite o numero de pontos turisticos na cidade:\n");
    scanf("%d", &turisticoA);


    // dados de entrada do segundo estado

    printf("Dados de entrada da carta 2:\n");

    printf("Digite a letra do segundo estado de A a H:\n");
    scanf("%s", letraB);

    printf("Digite o codigo do  segundo estado letra mais o numero de 01 a 04:\n");
    scanf("%s", codigoB);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidadeB);

    printf("Digite o numero de habitantes:\n");
    scanf("%lu", &populacaoB);

    printf("Digite a area territorial:\n");
    scanf("%f", &areaB);

    printf("Digite o valor do pib:\n");
    scanf("%f", &pibB);

    printf("Digite o numero de pontos turisticos na cidade:\n");
    scanf("%d", &turisticoB);

    DensidadeA = (float) populacaoA / areaA;
    PibPopA = (float) pibA / populacaoA;

    DensidadeB = (float) populacaoB / areaB;
    PibPopB = (float) pibB / populacaoB;

    SuperPoderA = (float)populacaoA + (float)turisticoA + areaA + pibA + (1/DensidadeA) + PibPopA;
    SuperPoderB = (float)populacaoB + (float)turisticoB + areaB + pibB + (1/DensidadeB) + PibPopB;
   

     //leitura na tela dos dados do primeiro estado
     printf("Carta 1:\n");
     printf("Estado: %s\n", letraA);
     printf("Codigo: %s\n",codigoA);
     printf("Nome do estado: %s\n", cidadeA);
     printf("Populacao: %lu\n", populacaoA);
     printf("Area: %f km^2\n", areaA);
     printf("Pib: %f reais\n", pibA);
     printf("Pontos turisticos: %d\n", turisticoA);
     printf("Densidade Populacional: %.2f hab/km^2\n",DensidadeA);
     printf("Pib per capita A: %.2f reais\n", PibPopA);
     printf("Super poder carta 1: %.2f\n", SuperPoderA);
     

    //leitura na tela dos dados do segundo estado
     printf("Carta 2:\n");
     printf("Estado: %s\n", letraB);
     printf("Codigo: %s\n",codigoB);
     printf("Nome do estado: %s\n", cidadeB);
     printf("Populacao: %lu\n", populacaoB);
     printf("Area: %f km^2\n", areaB);
     printf("Pib: %f reais\n", pibB);
     printf("Pontos turisticos: %d\n", turisticoB);
     printf("Densidade Populacional: %.2f hab/km^2\n",DensidadeB);
     printf("Pib per capita B: %.2f reais\n", PibPopB);
     printf("Super poder carta 2: %.2f\n", SuperPoderB);
     

     //Comparação entre os estados 
     printf("Comparacao entre os estados A e B:\n");
     printf("Populacao A > Populacao B %d\n", populacaoA > populacaoB);
     printf("Area A > Area B %d\n", areaA > areaB);
     printf("Pib A > Pib B %d\n", pibA > pibB);
     printf("Turistico A > Turistico B: %d\n", turisticoA > turisticoB);
     printf("Densidade A < Densidade B: %d\n", DensidadeA < DensidadeB); //vence o valor de densidade menor
     printf("Pib per capita A  > Pib per capita B:%d\n", PibPopA > PibPopB);
     printf("Super poder A > Super Poder B: %d\n", SuperPoderA > SuperPoderB);

    return 0;
}