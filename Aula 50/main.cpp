#include <iostream>

using namespace std;

int main(){
    float valor1, valor2, result=0;

    cout<<"\nInforme um valor: ";
    cin>>valor1;

    cout<<"\nInforme outro valor: ";
    cin>>valor2;

    for(int i=0;i<valor1;i++){
        result+=valor2;
    }

    cout<<"\n\nResultado: "<<result<<"\n\n";
    return 0;
}
