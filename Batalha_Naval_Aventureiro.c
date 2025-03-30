#include <stdio.h>

int main(){
    
int tabuleiro[10][11]={0};
char linha[11] = {' ','A','B','C','D','E','F','G','H','I','J'};
int navioA[3] = {3,3,3};
int navioB[3] = {3,3,3};
int i,j;

printf("### TABULEIRO BATALHA NAVAL ###:\n");

//comando define as colunas de A até J
for(j=0;j<11;j++){    
     printf("%c\t",linha[j]);  
}
printf("\n");

//comando que define a coluna de 1 a 10
for (int i = 0; i < 10; i++) {
    tabuleiro[i][0] = i + 1;
}

//Comando para a definição do tabuleiro com todas as posições em 0
//0 representa a água

for(i=0 ; i < 10;i++){  
    for(j=0; j < 11; j++){
        printf("%d\t", tabuleiro[i][j]);  
    }
    printf("\n");
}

//Print para separar o tabuleiro com zeros do tabuleiro com os navios
printf("###############################################################################\n");
printf("\n");

printf("### POSICAO NAVIOS ###\n");
//comando define as colunas de A até J
for(j=0;j<11;j++){    
    printf("%c\t",linha[j]);  
}
printf("\n");

//Colocando os navios nas diagonais

for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 11; j++){
        //posição navios na diagonal
        if(i == j && j<4 || i == 10-j && j>7){
            tabuleiro[i][j] = 3;
        }else{
            tabuleiro[i][j] = 0;
        }
        //definição dos números das linhas de 1 até 10
        tabuleiro[i][0] = i + 1; 
        //Posição navio horizontal
        tabuleiro[1][3] = 3;
        tabuleiro[1][4] = 3;
        tabuleiro[1][5] = 3;

        //Posição navio vertical
        tabuleiro[4][1] = 3;
        tabuleiro[5][1] = 3;
        tabuleiro[6][1] = 3;
        
        printf("%d\t", tabuleiro[i][j]); 
    }
    printf("\n");
}

return 0; 
  
}