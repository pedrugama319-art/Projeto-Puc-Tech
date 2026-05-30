#include <stdio.h>

int empate(char matriz[3][3]){
    int cont = 0;
    for(int i = 0; i < 3; i++){ //Itera pela matriz procurando por chars preenchidos
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] == 'X' || matriz[i][j] == 'O'){
                cont++;
            }
        }
    }
    int x = (cont == 9) ? 1 : 0; //x é 1 se cont == 9, 0 se não
    return x;
}

//Jogo da Velha - Projeto PUCTech

//Leopoldo Ortuzal Zuchieri
//Pedru Paulo Carvalho Gama
//Renato Corral Silva

// Protótipos das funções
int FVitoria(char m[3][3]);
void fTabuleiro(char tabuleiro[3][3]);

void fTabuleiro(char tabuleiro[3][3]) {
    printf("\n %c | %c | %c ", 
        (tabuleiro[0][0] == ' ') ? '1' : tabuleiro[0][0], 
        (tabuleiro[0][1] == ' ') ? '2' : tabuleiro[0][1], 
        (tabuleiro[0][2] == ' ') ? '3' : tabuleiro[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", 
        (tabuleiro[1][0] == ' ') ? '4' : tabuleiro[1][0], 
        (tabuleiro[1][1] == ' ') ? '5' : tabuleiro[1][1], 
        (tabuleiro[1][2] == ' ') ? '6' : tabuleiro[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c \n", 
        (tabuleiro[2][0] == ' ') ? '7' : tabuleiro[2][0], 
        (tabuleiro[2][1] == ' ') ? '8' : tabuleiro[2][1], 
        (tabuleiro[2][2] == ' ') ? '9' : tabuleiro[2][2]);
}
