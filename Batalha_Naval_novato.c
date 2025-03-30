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

//Comando para colocar a posição dos navios A e B no tabuleiro

printf("\n");
printf("### POSICAO NAVIOS ###\n");
printf("### NAVIO A - D5-E5-F5 ###\n");
printf("### NAVIO B - G7-G8-G9 ###\n");

//Posições navio A
tabuleiro[4][4] = 3;
tabuleiro[4][5] = 3;
tabuleiro[4][6] = 3;

//Posições navio B
tabuleiro[6][7] = 3;
tabuleiro[7][7] = 3;
tabuleiro[8][7] = 3;

//comando define as colunas de A até J
for(j=0;j<11;j++){    
    printf("%c\t",linha[j]);  
}
printf("\n");

//comando que define a coluna de 1 a 10
for (int i = 0; i < 10; i++) {
    tabuleiro[i][0] = i + 1;
}

for(i=0 ; i < 10;i++){  
    for(j=0; j < 11; j++){
        printf("%d\t", tabuleiro[i][j]); 
    }
    printf("\n");
}

return 0; 
  
}