#include <stdio.h>
#include <string.h>

struct pessoas{
    char nome[50];
    int idade;
    int telefone;
};

int main(){
    struct pessoas p [5];
    int i;
// Pedindo os dados da pessoa.
    for(i = 0 ; i < 5; i++){
    fgets(p[i].nome, sizeof(p[i].nome), stdin);
    p[i].nome[strcspn(p[i].nome, "\n")] = '\0';

    for(i = 0 ; i < 5; i++){
        printf("Digite sua idade: ");
        scanf("%d", &p[i].idade);
    }
    for(i = 0 ; i < 5; i++){
        printf("Digite seu numero: ");
        scanf("%d", &p[i].telefone);
        getchar();}
}
// ler a lista de Pessoas
    for(i = 0 ; i < 5; i++){
        printf("\n----- Lista de Usuarios-----\n");
        printf("pessoa %d -> nome: %s | idade: %d | telefone: %d", i+1, p[i].nome, p[i].idade, p[i].telefone);
    }

}