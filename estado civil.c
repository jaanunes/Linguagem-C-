#include <stdio.h>
#include <stdlib.h>


int main (){
    char estadocivil
    int idade, contIdade = 1, contSolt = 1, contDivorc;


    do{
    printf ("Qual o seu estado civil? \n Digite com 's', 'c', 'd' ou 'o': ");
    scanf("%c", &estadocivil);

    printf("Qual a sua idade?");
    scanf("%d", &idade);



    }while(idade != 0);


    return 0;
}
