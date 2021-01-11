#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    float Soma[26];
    int cont[26];

    for(int i=0;i<26;i++){
        Soma[i]=0;
        cont[i]=0;
    }

    char tempC;
    float tempF;

    FILE *arq = fopen("texto.txt","r");
    if( arq == NULL){
        cout<<"Erro ao abrir o arquivo\n";
        exit(0);
    }

    while( !feof(arq)){
        fscanf(arq,"%c%f ",&tempC,&tempF);

        /*
        if(cont[tempC-65]%2==0)
            Soma[tempC-65] += tempF;
        else
            Soma[tempC-65] -= tempF;

        cont[tempC-65]++;

        */
        if(cont[tempC-65]==0)
            Soma[tempC-65] += tempF;
        else
            Soma[tempC-65] -= tempF;

        if( cont[tempC-65] == 0)
            cont[tempC-65]=1;
        else
            cont[tempC-65] = 0;

        //cout<<tempC<<" - "<<tempF<<endl;
    }

    for(int i=0;i<26;i++){
        cout<< (char) (i+65) <<" - "<<Soma[i]<<endl;
    }

    fclose(arq);
    return 0;
}
