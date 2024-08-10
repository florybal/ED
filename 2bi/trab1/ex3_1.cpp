#include <iostream>

int main()
{
    int linhas=3, colunas=3;
    int **bi = new int*[linhas];

    for(int i=0; i < linhas; i++)
        bi[i] = new int*[colunas];

    for(int i=0; i <linhas; i++){
        for(int j= 0; j < colunas; ++j)
            bi[i][j] = i * bi[linhas][colunas] + j;
    }

    for(int i=0; i < linhas; ++i)
    {
        for(int j= 0; j < colunas; ++j)
            delete[] bi[j];

        delete[] bi[i];
    }

    delete[] bi;

    return 0;
}