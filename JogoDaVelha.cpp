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

