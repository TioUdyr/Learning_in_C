#include <stdio.h>
#include <string.h>

struct pessoas{
    char nome[50];
    int idade;
    int telefone;
};

int main(){
    struct pessoas p [5];
    int i, posicao, opcao;
    char buffer[50]; // Esse cara ajuda a trocar 

// Fazendo o menu do CRUD.

do {
    printf("Escolha uma das opcoes:\n");
    printf("[1] Cadastrar.\n");
    printf("[2] Ver a lista.\n");
    printf("[3] Atualizar a lista.\n");
    printf("[4] Deletar o Usuario.\n");
    printf("[5] Sair.\n");
    scanf("%d", &opcao);
}while(opcao != 5);




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

// Atualiza a lista.
    printf("Escolha uma das opcoes (1 a 5) para atualizar o cadastro: ");
    scanf("%d", &posicao);

    




}