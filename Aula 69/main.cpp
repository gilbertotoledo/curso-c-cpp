#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool LeResultados(int resultados[]){
    FILE *arq = fopen("resultados.txt","r");
    if(arq==NULL){
        return false;
    }

    int c=0;
    while(!feof(arq)){
        fscanf(arq,"%d %d %d %d %d %d",&resultados[c],&resultados[c+1],&resultados[c+2],&resultados[c+3],&resultados[c+4],&resultados[c+5]);
        c+=6;
    }
    fclose(arq);

    return true;
}

int main(){

    int resultados[120];

    int numeros[60];
    for(int i =0;i<60;i++)
        numeros[i]=0;

    int maiores[60];

    if(LeResultados(resultados)){
        //for(int i=0;i<120;i++){
        //    printf("%d ",resultados[i]);
        //}

        for(int i=0;i<120;i++){
            numeros[resultados[i]-1]++;
        }

        for(int i=0;i<60;i++){
            cout<<i+1<<" - "<<numeros[i]<<endl;
        }

    }else{
        cout<<"Ocorreu um erro ao ler do arquivo";
    }

    return 0;
}
