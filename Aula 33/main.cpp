#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    int valor=10;

    int *pValor;

    pValor = &valor;

    printf("Valor: %d  - Endereco: %x",valor,&valor);

    printf("\n\nValor: %d  - Endereco: %x", *pValor, pValor);
    */

    int *Pont;

    Pont = (int*) malloc( sizeof(int) );

    *Pont = 10;

    printf("Valor %d\n\n", *Pont);

    system("pause");
    return 0;
}
