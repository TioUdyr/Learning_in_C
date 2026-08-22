#include <stdio.h>
int main(){
    float peso, altura, imc;

    printf("Vamos calcular seu IMC, Coloque ponto se tiver numeros quebrados!\n");

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC deu: %.2f\n", imc);

    if(imc < 18.5){
        printf("Voce esta abaixo do peso, CUIDADO!");
    }
    else if(imc >= 18.5 && imc <= 24.9){
        printf("Voce esta com o peso normal.");
    }
    else if(imc <= 25 && imc <= 29.9){
        printf("Voce esta com excesso de peso, tome cuidado");
    }
    else if(imc >30 && imc <35){
        printf("Voce esta com obesidade, vai atras de um especialista");
    }
    else{
        printf("Voce esta com obesidade extrema, risco de ir ver o papai noel");
    }
    return 0;
}