#include<stdio.h>

int main(){
    float media, n1, n2, n3;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    printf("Sua media foi %.1f\n", media);

    if(media >= 10)
    {
        printf("FOSTE APROVADO.");
    }else if (media >= 9)
    {
        printf("FOSTE AO RECURSO.");
    }else{
        printf("FOSTE REPROVADO");
    }
}