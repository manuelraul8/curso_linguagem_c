#include<stdio.h>

int main(){
    int distancia, preco;

    printf("Qual e a distancia da viagem?km ");
    scanf("%d", &distancia);

    printf("Voce esta preste a comecar uma viagem %dkm.\n", distancia);
    if(distancia <= 200){
        preco = distancia * 30;
    }else{
        preco = distancia * 20;
    }
    printf("E o preco da sua passagem sera %d kz.", preco);
}