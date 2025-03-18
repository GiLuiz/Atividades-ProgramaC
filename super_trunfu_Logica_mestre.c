#include <stdio.h>

int main(){
     //a letra A(maiscula) representa a carta 1 e a letra B(maiuscula) a carta 2
    char cidadeA[25]; //
    int turisticoA;
    unsigned long int populacaoA;
    float areaA, pibA, DensidadeA, PibPopA;
    float SuperPoderA;

    char cidadeB[25]; 
    int turisticoB;
    unsigned long int populacaoB;
    float areaB, pibB, DensidadeB, PibPopB;
    float SuperPoderB;

    int opcao, atributo1, atributo2;
    float Resultado1, Resultado2, SomaA, SomaB;

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
      printf("Escolha uma das opcoes abaixo para comparacao do primeiro atributo:\n");
      printf("1.Populacao:\n");
      printf("2.Area:\n");
      printf("3.Pib:\n");
      printf("4.Pontos turisticos:\n");
      printf("5.Densidade demografica:\n");
      scanf("%d",&atributo1);

     switch (atributo1)
     {
     case 1:
        printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
        printf("Comparacao entre as populacoes\n");
        printf("Valores da populacao de cada cidade respectivamente: %lu e %lu\n", populacaoA, populacaoB);
        Resultado1 =  populacaoA > populacaoB? 1 : 0;
        if(Resultado1 == 1) {
              printf("Populacao do estado %s e maior entao Carta 1 venceu\n",cidadeA);
        }else if(Resultado1 == 0){
              printf("Populacao do estado %s e maior entao Carta 2 venceu\n", cidadeB);
        }else {
              printf("Empate\n");
        }
      break;
       
      case 2:
        printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
        printf("Comparacao entre as areas\n");
        printf("Valores das areas de cada cidade respectivamente: %.2f e %.2f\n", areaA, areaB); 
        Resultado1 =  areaA > areaB? 1 : 0;
        if(Resultado1 == 1) {
              printf("Area do estado %s e maior entao Carta 1 venceu\n",cidadeA);
        }else if(Resultado1 == 0){
              printf("Area do estado %s e maior entao Carta 2 venceu\n", cidadeB);
        }else {
              printf("Empate\n");
        }
      break;
    
      case 3:
      printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
      printf("Comparacao entre os pibs\n");
      printf("Valores dos pibs de cada cidade respectivamente: %.2f e %.2f\n", pibA, pibB); 
      Resultado1 =  pibA > pibB? 1 : 0;
      if(Resultado1 == 1) {
            printf("Pib do estado %s e maior entao Carta 1 venceu\n",cidadeA);
      }else if(Resultado1 == 0){
            printf("Pib do estado %s e maior entao Carta 2 venceu\n", cidadeB);
      }else {
            printf("Empate\n");
      }
    break;

    case 4:
    printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
    printf("Comparacao entre os pontos turisticos\n");
    printf("Quantidade de pontos turisticos de cada cidade respectivamente: %d e %d\n", turisticoA, turisticoB); 
    Resultado1 =  turisticoA > turisticoB? 1 : 0;
    if(Resultado1 == 1) {
          printf("Pontos turisticos do estado %s e maior entao Carta 1 venceu\n",cidadeA);
    }else if(Resultado1 == 0){
          printf("Pontos turisticos do estado %s e maior entao Carta 2 venceu\n", cidadeB);
    }else {
          printf("Empate\n");
    }
    break;

    case 5:
    printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
    printf("Comparacao entre as densidades demograficas\n");
    printf("Densidade demografica de cada cidade respectivamente: %.2f e %.2f\n", DensidadeA, DensidadeB); 
    Resultado1 =  DensidadeA < DensidadeB? 1 : 0;
    if(Resultado1 == 1) {
          printf("Densidade demografica do estado %s e menor entao Carta 1 venceu\n",cidadeA);
    }else if(Resultado1 == 0){
          printf("Densidade demografica do estado %s e menor entao Carta 2 venceu\n", cidadeB);
    }else {
          printf("Empate\n");
    }
    break;

     default:
          printf("Opcao invalida");
      break;
     }

     //Menu para a entrada do segundo atributo
     printf("Escolha uma das opcoes abaixo para comparacao do segundo atributo:\n");
     printf("1.Populacao:\n");
     printf("2.Area:\n");
     printf("3.Pib:\n");
     printf("4.Pontos turisticos:\n");
     printf("5.Densidade demografica:\n");
     scanf("%d",&atributo2);

     if(atributo1 == atributo2){
            printf("Voce escolheu o mesmo atributo. Escolha diferente do atributo1");
     }else{
            switch (atributo2)
            {
            case 1:
                  printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
                  printf("Comparacao entre as populacoes\n");
                  printf("Valores da populacao de cada cidade respectivamente: %lu e %lu\n", populacaoA, populacaoB); 
                  Resultado2 =  populacaoA > populacaoB? 1 : 0;
                  if(Resultado2 == 1) {
                        printf("Populacao do estado %s e maior \n",cidadeA);
                  }else if(Resultado2 == 0){
                        printf("Populacao do estado %s e maior\n", cidadeB);
                  }else {
                        printf("Empate");
                  }
            break;

            case 2:
                  printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
                  printf("Comparacao entre as areas\n");
                  printf("Valores das areas de cada cidade respectivamente: %.2f e %.2f\n", areaA, areaB); 
                  Resultado2 = areaA > areaB? 1 : 0;
                  if(Resultado2 == 1) {
                  printf("Area do estado %s e maior \n",cidadeA);
                  }else if(Resultado2 == 0){
                  printf("Area do estado %s e maior \n", cidadeB);
                  }else {
                  printf("Empate");
                  }
            break;

            case 3:
                  printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
                  printf("Comparacao entre os pibs\n");
                  printf("Valores dos pibs de cada cidade respectivamente: %.2f e %.2f\n", pibA, pibB); 
                  Resultado2 = pibA > pibB? 1 : 0;
                  if(Resultado2 == 1) {
                        printf("Pib do estado %s e maior \n",cidadeA);
                  }else if(Resultado2 == 0){
                        printf("Pib do estado %s e maior \n", cidadeB);
                  }else {
                        printf("Empate");
                  }
            break;

            case 4:
                  printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
                  printf("Comparacao entre os pontos turisticos\n");
                  printf("Quantidade de pontos turisticos de cada cidade respectivamente: %d e %d\n", turisticoA, turisticoB); 
                  Resultado2 = turisticoA > turisticoB? 1 : 0;
                  if(Resultado2 == 1) {
                        printf("Pontos turisticos do estado %s e maior \n",cidadeA);
                  }else if(Resultado2 == 0){
                        printf("Pontos turisticos do estado %s e maior \n", cidadeB);
                  }else {
                        printf("Empate");
                  }
            break;
        
            case 5:
                  printf("Estados comparados: %s e %s\n", cidadeA, cidadeB);
                  printf("Comparacao entre as densidades demograficas\n");
                  printf("Densidade demografica de cada cidade respectivamente: %.2f e %.2f\n", DensidadeA, DensidadeB); 
                  Resultado2 = DensidadeA < DensidadeB? 1 : 0;
                  if(Resultado2 == 1) {
                        printf("Densidade demografica do estado %s e menor \n",cidadeA);
                  }else if(Resultado2 == 0){
                        printf("Densidade demografica do estado %s e menor \n", cidadeB);
                  }else {
                        printf("Empate");
                  }
            break;
        
            default:
                  printf("Opcao invalida");
                  break;
            }

      //Soma dos atributos
      //SomaA referente a carta 1 e SomaB referente a carta2
     }
     if(((atributo1 = 1) && (atributo2 = 2)) || ((atributo1 = 2) && (atributo2 = 1))){
            SomaA = populacaoA + areaA;
            SomaB = populacaoB + areaB;
            printf("SomaA e SomaB, respectivamente:%.2f e %.2f\n",SomaA, SomaB);
     }else if(((atributo1 = 1) && (atributo2 = 3)) || ((atributo1 = 3) && (atributo2 = 1))){
            SomaA = populacaoA + pibA;
            SomaB = populacaoB + pibB;
            printf("SomaA e SomaB, respectivamente:%.2f e %.2f\n",SomaA, SomaB);
     }else if(((atributo1 = 1) && (atributo2 = 4)) || ((atributo1 = 4) && (atributo2 = 1))){
            SomaA = populacaoA + turisticoA;
            SomaB = populacaoB + turisticoB;
            printf("SomaA e SomaB, respectivamente:%.2f e %.2f\n",SomaA, SomaB);
     }else if(((atributo1 = 1) && (atributo2 = 5)) || ((atributo1 = 5) && (atributo2 = 1))){
            SomaA = populacaoA + DensidadeA;
            SomaB = populacaoB + DensidadeB;
            printf("SomaA e SomaB, respectivamente:%.2f e %.2f\n",SomaA, SomaB);
     }else if(((atributo1 = 2) && (atributo2 = 3)) || ((atributo1 = 3) && (atributo2 = 2))){
            SomaA = areaA + pibA;
            SomaB = areaB + pibB;
            printf("SomaA e SomaB, respectivamente:%.2f e %.2f\n",SomaA, SomaB);
     }else if(((atributo1 = 2) && (atributo2 = 4)) || ((atributo1 = 4) && (atributo2 = 2))){
            SomaA = areaA + turisticoA;
            SomaB = areaB + turisticoB;
            printf("SomaA e SomaB, respectivamente:%.2f e %.2f\n",SomaA, SomaB);
     }else if(((atributo1 = 2) && (atributo2 = 5)) || ((atributo1 = 5) && (atributo2 = 2))){
            SomaA = areaA + DensidadeA;
            SomaB = areaB + DensidadeB;
            printf("SomaA e SomaB, respectivamente:%.2f e %.2f\n",SomaA, SomaB);
     }else if(((atributo1 = 3) && (atributo2 = 4)) || ((atributo1 = 4) && (atributo2 = 3))){
            SomaA = pibA + turisticoA;
            SomaB = pibB + turisticoB;
            printf("SomaA e SomaB, respectivamente:%.2f e %.2f\n",SomaA, SomaB);
     }else if(((atributo1 = 3) && (atributo2 = 5)) || ((atributo1 = 5) && (atributo2 = 3))){
            SomaA = pibA + DensidadeA;
            SomaB = pibB + DensidadeB;
            printf("SomaA e SomaB, respectivamente:%.2f e %.2f\n",SomaA, SomaB);
     }else if (((atributo1 = 4) && (atributo2 = 5)) || ((atributo1 = 5) && (atributo2 = 4))) {
            SomaA = turisticoA + DensidadeA;
            SomaB = turisticoB + DensidadeB;
            printf("SomaA e SomaB, respectivamente:%.2f e %.2f\n",SomaA, SomaB);
     }else{
            printf("Escolha invalida");
     }

     // comparação das somas dos atributos. A soma maior vence.
    if(SomaA > SomaB ){
            printf ("Carta 1 venceu");
     }else if(SomaA < SomaB){
            printf("Carta 2 venceu");
     }else{
            printf("Empatou");
     }
     
    return 0;
}