#include <stdio.h>
int main(){

    float n1, n2, n3, media;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a sua terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("A sua media e: %.2f\n", media);

    if(media <= 7){
        printf("Reprovado!");}
    
    else{
        printf("Aprovado!");
    }
    

    return 0;
}