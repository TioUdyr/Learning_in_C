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
    char buffer[50]; // Esse cara ajuda a trocar 
// Pedindo os dados da pessoa.

    
    for(i = 0 ; i < 5; i++){
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(p[i].nome, sizeof(p[i].nome), stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = '\0';
    
        printf("Digite a idade da pessoa: ");
        fgets(buffer, sizeof(buffer), stdin);
        p[i].idade = atoi(buffer); // O atoi ajuda a converter a string pra 0 para nao dar erro.
    
        printf("Digite o numero da pessoa: ");
        fgets(buffer, sizeof(buffer), stdin);
        p[i].telefone = atoi(buffer);
    }
// ler a lista de Pessoas
    printf("\n----- Lista de Usuarios-----\n");
    for(i = 0 ; i < 5; i++){
        printf("pessoa %d -> nome: %s | idade: %d | telefone: %d\n", i+1, p[i].nome, p[i].idade, p[i].telefone);
    }
    return 0;
}