#include <stdlib.h>
#include <stdio.h>

struct TipoCelula{
    int item;
    TipoCelula *prox;
};

int Pilha_contador;
TipoCelula *Topo;


bool Pilha_Construtor(){
    Topo=NULL;
    Pilha_contador=0;
}

bool Pilha_Vazia(){
    if(Topo==NULL){
        return true;
    }else{
        return false;
    }
}

bool Pilha_Destrutor(){
    int Aux;
    TipoCelula *Temp;

    if( Pilha_Vazia() ){
        return false;
    }else{
        while(Topo!=NULL){
            Temp=Topo;
            Temp->prox=NULL;

            Topo=Topo->prox;

            free(Temp);
        }
        Pilha_contador=0;
        return true;
    }
}

/*
Pilha Cheia é desnecessário
bool Pilha_Cheia(){

}
*/





int Pilha_Tamanho(){
    return Pilha_contador;
}

bool Pilha_Push(int valor){//Empilhar
    TipoCelula *Nova_celula = (TipoCelula*)malloc(sizeof(TipoCelula));

    if(Nova_celula==NULL){ //Caso o SO não forneça memória RAM
        return false;
    }else{
        Nova_celula->item = valor;
        Nova_celula->prox = Topo;

        Topo=Nova_celula;

        Pilha_contador++;
        return true;
    }
}

bool Pilha_Pop(int &valor){ //Desempilhar
    TipoCelula *Temp;
    if(Pilha_Vazia()){
        return false;
    }else{
        valor = Topo->item;

        Temp = Topo;
        Topo = Topo->prox;

        Temp->prox=NULL; //Medida de segurança para desligar a célula removida da pilha

        free(Temp);
        Pilha_contador--;
        return true;
    }
}

bool Pilha_Get(int &valor){ //Obtém o elemento no topo da pilha
    if(Pilha_Vazia()){
        return false;
    }else{
        valor=Topo->item;
        return true;
    }
}

int main(){
    /*
    int *p;

    p=(int*)malloc(sizeof(int));

    free(p);
    */


    system("pause");
    return 0;
}
