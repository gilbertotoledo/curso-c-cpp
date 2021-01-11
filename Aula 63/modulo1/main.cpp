#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "\n\nModulo 1 - OK\n\n" << endl;

    if(argc>1){
        cout<<"\n\n"<<argv[1]<<"\n\n";
    }else{
        cout<<"\n\nNenhum argumento encontrado!\n\n";
    }
    return 0;
}
