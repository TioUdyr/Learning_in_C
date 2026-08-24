#include <stdio.h>
int main(){
    int n1, n2, resultado, operacao;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digte o segundo valor: ");
    scanf("%d", &n2);

    printf("Digite a opcao de\n[1] Soma\n[2] subtracao\n[3] multiplicacao\n[4] Divisao");
    scanf("%d", &operacao);

    switch(operacao){
        case 1:
        printf("A soma dos numeros da: %d", resultado = n1 + n2);
        break;

        case 2:
        printf("A subtracao dos numeros da: %d", resultado = n1 - n2);
        break;

        case 3:
        printf("A multiplicacao dos numeros da: %d", resultado = n1* n2);
        break;

        case 4:
            if(n2 == 0){
            printf("Divisao por 0 nao existe!");}
            else{
                printf("A divisao dos numeros da: %d", resultado = n1 /n2);
            }
        break;
        
        default:
            printf("Nao existe essa opcao!");

    }

    return 0;
}