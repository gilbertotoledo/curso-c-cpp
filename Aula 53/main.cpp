#include <iostream>

using namespace std;

void soma1(int &valor){

}

void soma2(int *valor){

}


int main(){

    soma1(valor); //PASSAGEM POR REFERENCIA

    soma2(&valor); //PONTEIRO;
    /*
    float valor=1;
    float valor=0.5;
    float valor=1.5;
    float valor=0.0000001;

    double valord=0.00000001;
    */

    int *p;

    int valor=10;
    p=&valor;


    int valor2=50/51; //Valor = 0
    float valor2 = 50/51; //Valor = 0.98


    cout << "Hello world!" << endl;
    return 0;
}
