#include <stdio.h>

int main(){

    char cidadeA[25]; //
    int turisticoA;
    unsigned long int populacaoA;
    float areaA, pibA, DensidadeA, PibPopA;
    float SuperPoderA;
    int opcao;
 
    char cidadeB[25]; 
    int turisticoB;
    unsigned long int populacaoB;
    float areaB, pibB, DensidadeB, PibPopB;
    float SuperPoderB;

    //dados de entrada do primeiro estado

    printf("Dados de entrada da carta 1:\n");

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

    //Cálculo da densidade populacional e do pib per capita carta 1
    DensidadeA = (float) populacaoA / areaA;
    

    //Cálculo da densidade populacional e do pib per capita carta 2
    DensidadeB = (float) populacaoB / areaB;
 

     //Criando um menu interativo e utilizando estruturas de decisão aninhadas
      printf("Escolha uma das opcoes abaixo para comparacao:\n");
      printf("1.Populacao:\n");
      printf("2.Area:\n");
      printf("3.Pib:\n");
      printf("4.Pontos turisticos:\n");
      printf("5.Densidade demografica:\n");
      scanf("%d",&opcao);

     switch (opcao)
     {
     case 1:
        printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
        printf("Comparacao entre as populacoes\n");
        printf("Valores da populacao de cada cidade respectivamente: %lu e %lu\n", populacaoA, populacaoB); 
        if(populacaoA > populacaoB) {
              printf("Populacao do estado %s e maior entao Carta 1 venceu",cidadeA);
        }else if(populacaoA < populacaoB){
              printf("Populacao do estado %s e maior entao Carta 2 venceu", cidadeB);
        }else {
              printf("Empate");
        }
      break;
       
      case 2:
        printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
        printf("Comparacao entre as areas\n");
        printf("Valores das areas de cada cidade respectivamente: %.2f e %.2f\n", areaA, areaB); 
        if(areaA > areaB) {
              printf("Area do estado %s e maior entao Carta 1 venceu",cidadeA);
        }else if(areaA < areaB){
              printf("Area do estado %s e maior entao Carta 2 venceu", cidadeB);
        }else {
              printf("Empate");
        }
      break;
    
      case 3:
      printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
      printf("Comparacao entre os pibs\n");
      printf("Valores dos pibs de cada cidade respectivamente: %.2f e %.2f\n", pibA, pibB); 
      if(pibA > pibB) {
            printf("Pib do estado %s e maior entao Carta 1 venceu",cidadeA);
      }else if(pibA < pibB){
            printf("Pib do estado %s e maior entao Carta 2 venceu", cidadeB);
      }else {
            printf("Empate");
      }
    break;

     case 4:
     printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
     printf("Comparacao entre os pontos turisticos\n");
     printf("Quantidade de pontos turisticos de cada cidade respectivamente: %d e %d\n", turisticoA, turisticoB); 
     if(turisticoA > turisticoB) {
          printf("Pontos turisticos do estado %s e maior entao Carta 1 venceu",cidadeA);
     }else if(turisticoA < turisticoB){
          printf("Pontos turisticos do estado %s e maior entao Carta 2 venceu", cidadeB);
     }else {
          printf("Empate");
     }
     break;

     case 5:
     printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
     printf("Comparacao entre as densidades demograficas\n");
     printf("Densidade demografica de cada cidade respectivamente: %.2f e %.2f\n", DensidadeA, DensidadeB); 
     if(DensidadeA < DensidadeB) {
          printf("Densidade demografica do estado %s e menor entao Carta 1 venceu",cidadeA);
     }else if(DensidadeA > DensidadeB){
          printf("Densidade demografica do estado %s e menor entao Carta 2 venceu", cidadeB);
     }else {
          printf("Empate");
     }
     break;

     default:
          printf("Opcao invalida");
      break;
     }
   
    return 0;
}