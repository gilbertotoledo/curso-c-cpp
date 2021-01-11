#include <stdio.h>
#include <stdlib.h>

typedef float tipoValor;

const float PI = 3.14;

#define PI 3.14

void ImprimeMenu(int &opcao){
    printf("\n\t\tMENU");
    printf("\n\t1 - OPCAO 1");
    printf("\n\t2 - OPCAO 2");
    printf("\n\t3 - OPCAO 3");
    printf("\n\t4 - SAIR");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

}

void ControlaMenu(int &opcao){
    switch(opcao){
        case 1:

            break;

        case 2:

            break;

        case 3:

            break;

        case 4:

            break;

        default:
            printf("Opcao Invalida");
    }

}


int main(){

    //int opcao;
    //ImprimeMenu(opcao);
    //ControlaMenu(opcao);

    //PI = 5;

    //tipoValor valor;


    float valor;
    int valorINT;

    valor=5.0;

    valorINT= (int) valor; //Type Casting

    if(valorINT!=valor){
        printf("\n\nTem parte decimal\n\n");
    }else{
        printf("\n\nValor inteiro\n\n");
    }

    system("pause");
    return 0;
}
