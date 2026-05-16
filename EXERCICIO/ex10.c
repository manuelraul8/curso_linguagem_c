#include<stdio.h>

int main(){
    int senha = 0;

    while (senha != 123)
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if(senha == 123){
            printf("Acesso Autorizado.");
            break;
        }
        printf("Acesso Negado.\n");
    }
}