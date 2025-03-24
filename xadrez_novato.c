#include <stdio.h>

int main(){

    int menu, i;

    //Menu inicial para a escolha da peça a ser movimentada
    printf("Escolha a peca a ser movimentada:\n");
    printf("1.Torre\n");
    printf("2.Bispo\n");
    printf("3.Rainha\n");
    scanf("%d",&menu);


switch (menu)
{
case 1:
    printf("Torre - anda 5 casas para cima:\n");

    i=1;
    do
    {
        printf("%d - cima\n",i); //saída
        i++;
    } while (i <= 5);

    break;

case 2:
    printf("Bispo - anda 5 casas na diagonal direita:\n");

    for( i = 1;i <=5; i++){
        printf("%d - cima direita\n",i);
    }
    break;

case 3:
    printf("Rainha - 8 casas para a esquerda:\n"); //A rainha anda 8 casas para a esquerda

    i=1;
    while (i<=8) //condiçã0
    {
        printf("%d - Esquerda\n",i); //saída
        i++;
    }
    break;

default:
    printf("Opcao invalida");
    break;
}

 return 0;

}