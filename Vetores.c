#include <stdio.h>


int main(){
    

    int vet[5] = {0, 0, 0, 0, 0}; 
    //printf("%d %d %d %d %d", vet[0], vet[1], vet[2], vet[3], vet[4]);
    int i;

    /*for(i = 0 ; i < 5; i++){
        printf("%d ", vet[i]);
    } //Estrutura de repeticaoo em FOR (ele pega e vai repetindo at� o item que eu desejei e de quanto em quanto ele vai pular)
    */

    for(i=0 ; i<5; i++){
        printf("Insira o elemento da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    for(i=0; i<5; i++){
        printf("%d ", vet[i]);
    }

}

//Vetor tamanho N vai ser 0 at� N-1

//vetores ser para armazenar coisas com o mesmo tipo mas cada um tem um indice para poder acessar (uma variavel simples com varias posi��es)