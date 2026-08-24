// Criar um vetor de Pessoa com 5 posições
// Preencher manualmente os dados de cada pessoa.
// Mostrar todos os registros na tela.

#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
};

int main(){

    struct pessoa pessoas[5]; // vetor com 5 pessoas
    int i;

    // entrada de dados
    for(i = 0 ; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; //remove o \n

        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &pessoas[i].idade);
        getchar(); // consome o \n deixado pelo scanf :O 
    }

    printf("\n----- Lista de Pessoas -----\n");
    for (i = 0; i < 5; i++){
        printf("Pessoa %d -> Nome: %s | Idade: %d\n", i+1, pessoas[i].nome, pessoas[i].idade);
    }
}
