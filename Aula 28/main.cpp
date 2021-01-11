#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor_int=10;
    char valor_char[5];

    itoa(valor_int,valor_char,10); //valor_int - valor a converter
                                   //valor_char - vetor que recebe o valor convertido
                                   //10 - base (2,8,10,16)

    printf("\n\n%s\n\n",valor_char);

    int novo_valor_int = atoi(valor_char); //atoi retorna um int
                                           //valor_char é um vetor com o valor a ser convertido

    printf("\n\n%d\n\n",novo_valor_int);

    system("pause");
    return 0;
}
