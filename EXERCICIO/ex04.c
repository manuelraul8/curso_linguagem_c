#include<stdio.h>

int main(){
    int num, antecessor, sucessor;

    printf("Digite um numero: ");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("O antecessor de %d e %d\n", num, antecessor);
    printf("O sucessor de %d e %d\n", num, sucessor);
}