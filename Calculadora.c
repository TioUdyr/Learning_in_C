#include <stdio.h>
int main(){
    float n1, n2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo: ");
    scanf("%f", &n2);

    printf("Escolha um operador (+, -, *, /): \n");
    scanf("%c", &operacao);

    if(operacao == '+'){    
        printf("A soma deu: ");
    }
    else if(operacao == '-'){
        printf("A subtracao deu: ");
    }
    else if(operacao == '*'){
        printf("A multplicacao deu: ");
    }
    else if(operacao == '/'){
        if(n2 == 0){prinft("A divisao deu deu: ");}
        else{
            printf("Nao vai rolar divisao por 0");
        }
    }
    else{
        printf("Erro!");
    }
    
    return 0;
}