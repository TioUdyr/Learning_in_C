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
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(p[i].nome, sizeof(p[i].nome), stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = '\0';
    
        printf("Digite a idade da pessoa: ");
        scanf("%d", &p[i].idade);
        getchar();
    
        printf("Digite o numero da pessoa: \n");
        scanf("%d", &p[i].telefone);
        getchar();}
// ler a lista de Pessoas
    printf("\n----- Lista de Usuarios-----\n");
    for(i = 0 ; i < 5; i++){
        printf("pessoa %d -> nome: %s | idade: %d | telefone: %d\n", i+1, p[i].nome, p[i].idade, p[i].telefone);
    }
    return 0;
}