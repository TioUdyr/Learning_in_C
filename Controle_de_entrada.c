#include <stdio.h>
int main (){

    int idade, ingresso;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Você tem ingresso?");
    scanf("%d", &ingresso);

    if(idade >= 18 && ingresso == 'sim'){
        printf("Voce pode entrar");
    }
    else{
        printf("Voce nao pode entrar");
    }

    return 0;
}

//precisa ter 18 anos
// ter ingresso ou nao
//obrigatorio atender as duas requisiçoes caso contrario nao entra
