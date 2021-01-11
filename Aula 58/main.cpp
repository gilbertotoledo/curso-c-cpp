#include <iostream>

using namespace std;

//°C = (°F - 32)/1,8
//°F = °C × 1,8 + 32

float CtoF(float c){
    return (c*1.8) + 32;
}

float FtoC(float f){
    return (f-32)/1.8;
}

int main(){

    cout << "\n32° C = " <<CtoF(32)<< endl;

    cout << "\n0° F = " <<FtoC(0)<< endl;
    return 0;
}
