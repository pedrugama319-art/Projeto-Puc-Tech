#include <stdio.h>

//Jogo da Velha - Projeto PUCTech

//Leopoldo Ortuzal Zuchieri
//Pedru Paulo Carvalho Gama
//Renato Corral Silva


// Protótipos das funções

int FVictory (char m[3][3]); //m[i][j]
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

int FVictory (char m[3][3]){ //essa funcao so sera chamada a partir da quinta jogada 
    int i, j;

    for(i = 0; i < 3; i++){  //testa as vitorias na horizontal
        if(m[i][0] == m[i][1] && m[i][1] == m[i][2] && m[i][0] != ' '){
            if(m[i][0] == 'X'){
                return 1;
            }
            else{
                return 2;
            }
        }
    }
    for(j = 0; j < 3; j++){  //testa as vitorias na vertical
        if(m[0][j] == m[1][j] && m[1][j] == m[2][j] && m[0][j] != ' '){
            if(m[0][j] == 'X'){
                return 1;
            }
            else{
                return 2;
            }
        }
    }
    if(m[0][0] == m[1][1] && m[1][1] == m[2][2] && m[0][0] != ' '){    //testa a primeira diagonal
        if(m[0][0] == 'X'){
            return 1;
        }
        else{
            return 2;
        }
    }
    if(m[0][2] == m[1][1] && m[1][1] == m[2][0] && m[0][2] != ' '){    //testa a segunda diagonal
        if(m[0][2] == 'X'){
            return 1;
        }
        else{
            return 2;
        }
    }

    
}

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






