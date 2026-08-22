#include <stdio.h>
#include <locale.h>
/*struct novo_tipo{
    int dado; //campos <
    float valor; //campos<
};

int main(){

    struct novo_tipo variavel;
    
    variavel.dado = 10; //Para adicionar alguma coisa nos campos usar sempre variavel. nome do campo que vc escolheu
    variavel.valor = 22.22;

    printf("%d %.2f", variavel.dado, variavel.valor);

}*/

struct produto{
    int cod;
    float valor;
};

int main(){
    setlocale(LC_ALL, "Portuguese"); //isso aqui pode mudar a saida de um valor float com . ou ,
    struct produto p; // esse p representa a variavel de produto.

    printf("Digite o código do produto: ");
    scanf("%d", &p.cod); //usa a variavel do produto e a variavel que vc atribuiu dentro do struct para poder preencher as informa��es

    printf("Digite o valor do produto em reais: ");
    scanf("%f", &p.valor);

    printf("Os dados são:\n");
    printf("Código: %d.\n", p.cod);
    printf("Valor: R$%.2f\n", p.valor);
}
