#include <stdio.h>
#include <stdlib.h>

int main(){

    int Valor;

    int *PontValor;

    Valor=20;

    PontValor = &Valor;

    printf("\n\nPosicao da variavel valor: %x", PontValor); //%x imprime um valor hexadecimal
                                                            //imprime a posicao de memoria da vairiavel VALOR

    printf("\nValor= %d\n\n", Valor);

    system("pause");
    return 0;
}
