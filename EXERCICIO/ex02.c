#include<stdio.h>

int main(){
    int num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero %d e PAR.", num);
    }else{
        printf("O numero %d e IMPAR.", num);
    }
}