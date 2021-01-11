#include <stdio.h>
#include <stdlib.h>

int Valor; //Variavel Global

void ValorSet(int valor){ //Set atribui um valor à variável
    Valor=valor;
}

int ValorGet(){ //Obter o valor da variável
    return Valor;
}

void ValorSoma(int soma){
    Valor+=soma;   // +=  -> Valor = Valor + soma;
}

int main(){

    ValorSet(50);

    ValorSoma(20);

    printf("\n\nValor= %d\n\n\n", ValorGet() );

    system("pause");
    return 0;
}
