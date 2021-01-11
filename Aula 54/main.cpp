#include <iostream>

using namespace std;

void move_disco(int d, char ori, char dest, char aux){
    if(d==1){
        cout<<"Mover disco "<<d<<" de "<<ori<<" para "<<dest<<endl;
    }else{
        move_disco(d-1,ori,aux,dest);
        cout<<"Mover disco "<<d<<" de "<<ori<<" para "<<dest<<endl;
        move_disco(d-1,aux,dest,ori);
    }

}


int main(){
    int discos = 20;
    move_disco(discos,'A','C','B');

    return 0;
}

