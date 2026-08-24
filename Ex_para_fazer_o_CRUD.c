// Primeiro exercicio vetores básicos
// Crie um programa que armazene 5 números em um vetor.
// Mostre todos os números na tela
// Depois, peça ao usuário para digitar um índice(um dos 5 valores) e altere o valor naquela posição.

#include <stdio.h>
int main(){
    int numeros[5];
    int i, posicao, novo_valor;
// Entrada de valores.
    printf("Digite 5 numeros\n"); 
    for(i = 0 ; i < 5; i++){  // Essa linha está fazendo um loop da posição 0 da minha lista até a 4. Por isso você consegue digitar 5 vezes ela pega quantas voce declarou
        printf("Numero %d: ", i+1); // Esssa linha está printando os números que o usuario digitou e tem o (i+1) pra lista nao começar no 0
        scanf("%d", &numeros[i]);

    }
// Exibindo valores
    printf("\n--- Valores digitados ---\n");
    for (i = 0 ; i < 5; i++){ // Definindo um loop com limite e sequencia de 1 em 1
        printf("Posicao %d -> %d\n", i+1, numeros[i]); // Mostrando a posicao da lista e em seguida o numero escolhido
    }

// Alterando um valor
    printf("\nDigite uma opcao (0 a 4) que deseja alterar: ");
    scanf("%d", &posicao);
    
    if (posicao >= 0 && posicao < 5){ // Essa linha esta limitando os valores, tem que ser maior que 0 e menor que 5
        printf("Digite o novo valor: ");
        scanf("%d", &novo_valor);
        numeros[posicao] = novo_valor; // aqui ela está pegando a posicao e colocando o novo valor no input que a pessoa deu na linha de cima
    } else{
        printf("Posicao invalida\n");
    }

// Exibindo novamente  
    printf("\n--- Valores alterados ---\n");  //Esse codigo aparece os valores atualizados porque ele segue a sequencia depois de alterar os valores
    for (i= 0; i <5; i++){ 
        printf("Posicao %d -> %d\n",i+1, numeros[i]);
    }
}