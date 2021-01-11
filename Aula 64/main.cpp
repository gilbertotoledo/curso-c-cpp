#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct TipoAluno{
    char nome[100];
    int idade;
};

int f3(int valor){
    return valor;

    //exit(20);
}

int f2(int valor){
    return f3(valor);
}

int f1(int valor){
    return f2(valor);
}





int main(){

    TipoAluno alunos[10];
    int nota;

    //cout << "Hello world!" << endl;

    printf("Ola mundo!");

    for(int i=0;i<5;i++){

    }



    return f1(5);

}
