#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int ano_atual = 2026;
    int ano_nascimento;
    int idade;
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    
    idade = ano_atual - ano_nascimento;
    
    if(ano_nascimento > ano_atual){
        printf("Este anos ainda não existe. ");
    }else{
        printf("Você tem %d anos de idade. ", idade);
    }
}