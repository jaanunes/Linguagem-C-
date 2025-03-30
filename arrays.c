#include<stdio.h>
#define TAM 10

int main(){
    int valores[TAM], i;

    for(i = 0; i < TAM; i++){
        printf("Digite um valor para a posicao %d:", i);
        scanf("%d", &valores[i]);
    }

    printf("\n");
    for(i = 0; i < TAM; i++){
        printf("\n%d", valores[i]);
    }

    printf("\nMultiplos de 3: ");
    for(i = 0; i < TAM; i++){
        if(valores[i] % 3 == 0){
            printf("\n%d", valores[i]);
        }
    }

    return 0;
}

