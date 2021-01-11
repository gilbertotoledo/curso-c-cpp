#include <stdio.h>
#include <stdlib.h>

int main(){

    int Valor, Soma=0;

    do{
        printf("Digite um valor ou -1 para sair: ");
        scanf("%d", &Valor);
        if(Valor!=-1)
           Soma = Soma + Valor; //Soma+=Valor;

    }while(Valor!=-1);

    printf("Soma: %d", Soma);
    /*
    while( teste){

    }

    do{

    }while(teste);

    */

    system("pause");
    return 0;
}
