#include<stdio.h>

int main(){
    int menu;

    printf("\n");
    printf("1 - Hamburguer\n");
    printf("2 - Pizza\n");
    printf("3 - Cachorro-quente\n");
    printf("4 - Refrigerante\n");
    printf("\n");

    printf("Digite uma opcao do menu: ");
    scanf("%d", &menu);
    printf("\n");

    switch(menu){
        case 1:
            printf("Produto: Hamburguer\nPreco: 2500 kz");
            break;
        case 2:
            printf("Produto: Pizza\nPreco: 5000 kz");
            break;
        case 3:
            printf("Produto: Cachorro-quente\nPreco: 2000 kz");
            break;
        case 4:
            printf("Produto: Refrigerante\nPreco: 1000 kz");
            break;
        case 5:
            printf("Saindo...\n");
            printf("Volte sempre");
            break;
        default: 
            printf("Opcao invalida!!!");
            break;
    }
}