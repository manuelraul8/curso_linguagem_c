#include<stdio.h>

int main(){
    int n1, n2, soma, sub, mult, divisao, opcao;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um outro numero: ");
    scanf("%d", &n2);

    printf(" \n");
    printf("Digite 1 para: somar \n");
    printf("Digite 2 para: subtrair \n");
    printf("Digite 3 para: multiplicar \n");
    printf("Digite 4 para: dividir \n");
    printf("\n");

    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            soma = n1 + n2;
            printf("A soma entre %d + %d = %d\n", n1, n2, soma);
            break;
        case 2:
            sub = n1 - n2;
            printf("A subtracao entre %d - %d = %d\n", n1, n2, sub);
            break;
        case 3:
            mult = n1 * n2;
            printf("A multiplicacao entre %d X %d = %d\n", n1, n2, mult);
            break;
        case 4:
            divisao = n1 / n2;
            printf("A divisao entre %d / %d = %d\n", n1, n2, divisao);
            break;
        default:
            printf("Opcao invalida!!");
            break;
    }
}