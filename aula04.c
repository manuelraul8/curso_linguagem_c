#include<stdio.h>
#include<stdlib.h>

int main(){
    float n;

    printf("Digite a nota: ");
    scanf("%f", &n);

    if(n <= 4){
        printf("Reprovado");
    }
}