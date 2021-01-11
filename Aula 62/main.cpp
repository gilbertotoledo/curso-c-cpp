#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]){
    system("cls");
    cout<<"Seja bem vindo\n"<<endl;
    for(int i=0; i < argc; i++){
        cout<<"Argumento "<<i<<" -> "<<argv[i]<<endl;
    }
    cout<<"\n\n";
    return 0;
}
