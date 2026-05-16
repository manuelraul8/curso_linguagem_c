#include<stdio.h>

int main(){
    int n1, n2, soma, mult;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    //Operadores aritmetricos.
    soma = n1 + n2;
    mult = n1 * n2;

    printf("O resultado da soma e %d\n", soma);
    printf("O resultado da multiplicacao e %d\n", mult);
}