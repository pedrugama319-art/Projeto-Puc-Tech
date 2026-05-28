//Jogo da Velha - Projeto PUCTech

//Leopoldo Ortuzal Zuchieri
//Pedru Paulo Carvalho Gama
//Renato Corral Silva

#include <stdio.h>

void fTabuleiro(char tabuleiro[3][3]){
    printf(" %c | %c | %c ", tabuleiro[0][0], tabuleiro [0][1], tabuleiro[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", tabuleiro[1][0], tabuleiro [1][1], tabuleiro[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", tabuleiro[2][0], tabuleiro [2][1], tabuleiro[2][2]);
    printf("\n");
}