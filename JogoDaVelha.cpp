//Jogo da Velha - Projeto PUCTech

//Leopoldo Ortuzal Zuchieri
//Pedru Paulo Carvalho Gama
//Renato Corral Silva

#include <stdio.h>

// Protótipos das funções
int FVitoria(char m[3][3]);
void fTabuleiro(char tabuleiro[3][3]);
int fEmpate(char matriz[3][3]);

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

