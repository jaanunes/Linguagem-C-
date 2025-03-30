#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int hora;

    printf("Digite a hora \n");
    scanf("%d", &hora);

    if(hora >= 0 && hora <= 11){
        printf("Agora é manhã");
    }
    else if(hora >= 12 && hora <= 17){
        printf("Agora é Tarde");
    }
    else if(hora >= 18 && hora <= 23){
        printf("Agora é noite");
    }
    else{
        printf("ERRO");
    }

 return 0;
}
