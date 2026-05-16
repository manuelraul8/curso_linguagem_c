#include<stdio.h>

int main(){
    int preco, desconto;

    printf("Digite o preco do produto: ");
    scanf("%d", &preco);

    desconto = preco - (preco * 5 / 100);

    printf("O produto que custava %d kz. \n", preco);
    printf("Agora custa %d com 5%% de desconto.", desconto);
}