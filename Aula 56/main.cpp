#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

char* Mes_numero(int num){
    switch(num){
    case 1:
        return "Janeiro";
        break;
    case 2:
        return "Fevereiro";
        break;
    case 3:
        return "Marco";
        break;
    case 4:
        return "Abril";
        break;
    case 5:
        return "Maio";
        break;
    case 6:
        return "Junho";
        break;
    case 7:
        return "Julho";
        break;
    case 8:
        return "Agosto";
        break;
    case 9:
        return "Setembro";
        break;
    case 10:
        return "Outubro";
        break;
    case 11:
        return "Novembro";
        break;
    case 12:
        return "Dezembro";
        break;
    default:
        return "Mes incorreto";
    }
}

int Mes_string(char mes[15]){
    if(strcmp(mes,"janeiro")==0){
        return 1;
    }
    else if(strcmp(mes,"fevereiro")==0){
        return 2;
    }
    else if(strcmp(mes,"marco")==0){
        return 3;
    }
    else if(strcmp(mes,"abril")==0){
        return 4;
    }
    else if(strcmp(mes,"maio")==0){
        return 5;
    }
    else if(strcmp(mes,"junho")==0){
        return 6;
    }
    else if(strcmp(mes,"julho")==0){
        return 7;
    }
    else if(strcmp(mes,"agosto")==0){
        return 8;
    }
    else if(strcmp(mes,"setembro")==0){
        return 9;
    }
    else if(strcmp(mes,"outubro")==0){
        return 10;
    }
    else if(strcmp(mes,"novembro")==0){
        return 11;
    }
    else if(strcmp(mes,"dezembro")==0){
        return 12;
    }else{
        return 0;
    }
}

int main(){

    cout << Mes_numero(1) << endl;
    cout << "\n\n"<<Mes_string("abril")<<endl;
    return 0;
}
