#include <stdio.h>
int main(){

    float peso, altura, imc;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O seu IMC: %.2f\n", imc);

    return 0;
}