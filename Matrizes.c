#include <stdio.h>

int main(){

    int mat[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

//matrizes vao trabalhar com linhas e colunas, ela é tipo um excel. Posso escolhar qual indice da coluna que quero armazenar o dado ou posso escolher ele
//Se acostumar com for dentro do for para navegação em bi dimensional