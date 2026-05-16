#include<stdio.h>

int main(){
    int num = 0, soma = 0, cont = 0;
    
    while (num != 999)
    {
        printf("Digite um numero [999 para parar]: ");
        scanf("%d", &num);

        if(num == 999){
            break;
        }
        soma += num;
        cont++;
    }
    printf("\nVoce digitou %d numeros.\n", cont);
    printf("E a soma deles e: %d", soma);
}