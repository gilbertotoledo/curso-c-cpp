#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

bool Existe(int valores[],int tam, int valor){
    for(int i = 0;i<tam;i++){
        if(valores[i]==valor)
            return true;
    }
    return false;
}

void GeraAleatorios(int numeros[],int quantNumeros,int Limite){
    srand(time(NULL));

    int v;
    for(int i=0;i<quantNumeros;i++){
        v = rand() % Limite;
        while(Existe(numeros,i,v)){
            v = rand() % Limite;
        }
        numeros[i] = v;
    }

}

int main(){
    int numeros[500];
    GeraAleatorios(numeros,500,10000);
    for(int i = 0;i<500;i++){
        cout<<numeros[i]<<" - ";
    }

    return 0;
}
