#include<stdio.h>
#include<stdlib.h>

int main()
{
    int soma;
    int n1;
    int n2;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite um outro número: ");
    scanf("%d", &n2);
    
    soma = n1 + n2;
    
    printf("A soma entre %d + %d = %d", n1, n2, soma);
    
}