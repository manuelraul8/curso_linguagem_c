#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    int dobro;
    int triplo;

    printf("Digite um numero: ");
    scanf("%d", &num);

    dobro = num * 2;
    triplo = num * 3;

    printf("O dobro de %d e %d\n", num, dobro);
    printf("O triplo de %d e %d\n", num, triplo);
}

