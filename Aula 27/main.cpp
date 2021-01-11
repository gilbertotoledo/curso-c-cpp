#include <stdio.h>
#include <stdlib.h>

int const MAXTAM=1000;

int Frente, Tras;
int Fila[MAXTAM];

void Fila_Construtor(){
    Frente=0;
    Tras=-1;
}

bool Fila_Vazia(){
    if(Frente>Tras){
        return true;
    }else{
        return false;
    }

    //return Frente>Tras;
}

bool Fila_Cheia(){
    if(Tras==MAXTAM-1){
        return true;
    }else{
        return false;
    }
}

bool Fila_Enfileirar(int valor){
    if(Fila_Cheia()){
        return false;
    }else{
        Tras++;
        Fila[Tras]=valor;
        return true;
    }
}

bool Fila_Desenfileirar(int &valor){
    if(Fila_Vazia()){
        return false;
    }else{
        valor=Fila[Frente];
        Frente++;
        return true;
    }
}

bool Fila_Get(int &valor){
    if(Fila_Vazia()){
        return false;
    }else{
        valor=Fila[Frente];
        return true;
    }
}

int Fila_Tamanho(){
    return (Tras - Frente)+1;
}


int main(){
    int Valor;
    Fila_Construtor();

    Fila_Enfileirar(5);
    Fila_Enfileirar(2);
    Fila_Enfileirar(7);

    printf("\n\nTamanho:%d\n\n",Fila_Tamanho());


    while( Fila_Desenfileirar(Valor) ){
        printf("\nValor:%d\n",Valor);
    }
    printf("\n\nTamanho:%d\n\n",Fila_Tamanho());

    /*
    if( Fila_Desenfileirar(Valor) ){
        printf("\n\nValor:%d\n\n",Valor);
    }else{
        printf("\n\nFila Vazia\n\n");
    }*/

    system("pause");
    return 0;
}
