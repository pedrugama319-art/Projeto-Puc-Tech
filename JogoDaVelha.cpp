#include <stdio.h>
#include <iostream>

int FVictory (char m[3][3]); //m[i][j]

int FVictory (char m[3][3]) //essa funcao so sera chamada a partir da quinta jogada 
{
    int i, j;

    for(i = 0; i < 3; i++)  //testa as vitorias na horizontal
    {
        if(m[i][0] == m[i][1] && m[i][1] == m[i][2])
        {
            if(m[i][0] == 'X')
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
    }
    for(j = 0; j < 3; j++)  //testa as vitorias na vertical
    {
        if(m[0][j] == m[1][j] && m[1][j] == m[2][j])
        {
            if(m[0][j] == 'X')
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
    }
    if(m[0][0] == m[1][1] && m[1][1] == m[2][2])    //testa a primeira vertical 
    {
        if(m[0][0] == 'X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    if(m[0][2] == m[1][1] && m[1][1] == m[2][0])    //testa a segunda vertical 
    {
        if(m[0][2] == 'X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }

    
}

