#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[50]; // virou uma string
    int idade;
};

int main(){
    struct pessoa p;

    printf("Digite seu nome: \n");
    fgets(p.nome, sizeof(p.nome), stdin); //Ele consegue ler melhor os caracteres que tem espaço por ex: Ana Maria
    // remove o \n que o fgets coloca
    p.nome[strcspn(p.nome, "\n")] = '\0'; // Essa linha esta removendo o \n quando a pessoa termina de dar a informação.

    printf("Digite sua idade: \n");
    scanf("%d", &p.idade);

    printf("Os dados da pessoa sao:\n");
    printf("Nome %s\n", p.nome);
    printf("Idade %d", p.idade);

}