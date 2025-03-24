#include <stdio.h>

void moverTorre(int casas){ //comando recursivo para mover torre, rainha e bispo
    if(casas >0){
    moverTorre(casas - 1);
    printf("%d - cima\n",casas); //ordem crescente
    
    }
}

void moverRainha(int casas){
    if(casas >0){
    moverRainha(casas - 1);
    printf("%d - Esquerda\n",casas);
    
    }
}

void moverBispo(int casas){
    if(casas >0){
    moverBispo(casas - 1);
    printf("%d - cima direita\n",casas);
    
    }
}

int main(){

    int menu, i, j;

    //Menu inicial para a escolha da peça a ser movimentada
    printf("Escolha a peca a ser movimentada:\n");
    printf("1.Torre\n");
    printf("2.Bispo\n");
    printf("3.Rainha\n");
    printf("4.Cavalo\n");
    scanf("%d",&menu);


switch (menu)
{
case 1:
    printf("Torre:\n");// - anda 5 casas para cima
    moverTorre(5); //(5) indica a quantidade de casas que a Torre anda 

    break;

case 2:
    printf("Bispo:\n"); // anda 5 casas na diagonal direita (cima - direita)

    moverBispo(5);  //comente o comando recursivo para rodar o loop aninhado
    printf("\n"); //pular uma linha entre a impressão recursiva e a aninhada

    //Loop aninhado for
    for( i = 1;i <=5; i++){  
        printf("%d - cima\n",i);

        for(j=1;j<=1;j++){
            printf("%d - direita \n",i);
        }
            printf("\n");
    }
    
    break;

case 3:
    printf("Rainha:\n"); //A rainha anda 8 casas para a esquerda
    moverRainha(8);

    break;

case 4:
    printf("Cavalo:\n"); 

    //loops aninhados. Duas casas para cima e uma para a direitra

    for(i=1;i<=1;i++){
        for(j=1;j<=2;j++){
            printf("Cima\n");
        }
        printf("Direita");
    }
    break;

default:
    printf("Opcao invalida");
    break;
}

 return 0;

}