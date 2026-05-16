#include<stdio.h>

int main(){
    int dias, km, valor_carro, valor_km, total;

    printf("Quantos dias alugado? ");
    scanf("%d", &dias);
    printf("Quantos Km rodados? ");
    scanf("%d", &km);

    valor_carro = dias * 10000;
    valor_km = km * 10;
    total = valor_carro + valor_km;
    
    printf("O total a pagar e %d kz", total);
}