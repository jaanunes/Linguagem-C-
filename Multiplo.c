#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, soma, mult, div;
    char letra;

    printf("Digite dois n�meros: \n");
    scanf("%d %d", &n1, &n2);

    printf("Escolha uma opera��o \n");
    printf("Digite S para somar");
    printf("Digite M para multiplicar");
    printf("Digite D para dividir");

     fflush(stdin);
    scanf("%c", &letra);
    fflush(stdin);
    printf("%c", letra);
    if( letra == 'S' || letra == 's'){
        soma = n1 + n2;
        printf("A soma �: %d", soma);
    }

system ("pause");

 return 0;
}
