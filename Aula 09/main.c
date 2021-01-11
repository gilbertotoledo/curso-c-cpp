#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char caracter;

    printf("Digite um caracter: ");
    scanf("%c", &caracter);

    //caracter=toupper(caracter);
    //caracter=tolower(caracter);

    //printf("\n\nCaracter digitado: -%c-\n\n", caracter);

    printf("Caracter: %c  -  Valor na tabela ascii: %d\n", caracter, caracter);


    printf("Digite o valor do caracter: ");
    scanf("%d", &caracter);

    printf("Caracter: %c  -  Valor na tabela ascii: %d\n", caracter, caracter);

    /*
    if(tolower(caracter)=='b'){
        printf("\n\nDigitou a letra b!\n\n");
    }
    else{
        printf("\n\nDigitou outro caracter!\n\n");
    }


    if(caracter=='b' || caracter=='B'){
        printf("\n\nDigitou a letra b!\n\n");
    }
    else{
        printf("\n\nDigitou outro caracter!\n\n");
    }*/

    system("pause");
    return 0;
}
