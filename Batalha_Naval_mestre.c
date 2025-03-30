#include <stdio.h>

int main(){
    
int tabuleiro[10][11]={0};
char linha[11] = {' ','A','B','C','D','E','F','G','H','I','J'};
int navioA[3] = {3,3,3};
int navioB[3] = {3,3,3};
int i,j;
int cone[5][5]={0};
int cruz[5][5] = {0};
int octaedro[5][5] = {0};

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

//Separação entre as matrizes
printf("###############################################################################\n");
printf("\n");
printf("### MATRIZES DE HABILIDADES ###:\n");
printf("### CONE ###:\n");
for(i=0; i < 5;i++){  
    for(j=0; j < 5; j++){
        if((i == 0 && j == 2) || (i==1 && j>0 && j<4) || (i==2)){
        cone[i][j]=1; 
    }
        printf("%d ",cone[i][j]);
    }
    printf("\n");
}

printf("\n");
printf("### CRUZ ###:\n");
for(i=0; i < 5;i++){  
    for(j=0; j < 5; j++){
        if((i == 0 && j == 2) || (i==1) || (i==2 && j>1 && j<3)){
        cruz[i][j]=1; 
    }
        printf("%d ",cruz[i][j]);
    }
    printf("\n");
}

printf("\n");
printf("### OCTAEDRO ###:\n");
for(i=0; i < 5;i++){  
    for(j=0; j < 5; j++){
        if((i == 0 && j == 2) || (i==1 && j>0 && j<4) || (i == 2 && j == 2)){
        octaedro[i][j]=1; 
    }
        printf("%d ",octaedro[i][j]);
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
        //Condicional da posição navios na diagonal e habilidades
        if(i == j-1 && j<4 || i == 10-j && j>7){
            tabuleiro[i][j] = 3;
        }else if ((i == 2 && j == 5) || (i==3 && j>3 && j<7) || (i==4 && j>2 && j<8)) //forma cone
        {
            tabuleiro[i][j] = 5;
        }else if((i == 5 && j == 8) || (i==6 && j>5 && j<=10) || (i==7 && j == 8)){
            tabuleiro[i][j] = 5; //forma cruz
        }else if((i == 6 && j == 4) || (i==7 && j>2 && j<6) || (i==8 && j == 4)){
            tabuleiro[i][j] = 5; //forma octaedro
        }

        //definição dos números das linhas de 1 até 10
        tabuleiro[i][0] = i + 1; 

        //Posição navio horizontal
        tabuleiro[9][1] = 3;
        tabuleiro[9][2] = 3;
        tabuleiro[9][3] = 3;

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