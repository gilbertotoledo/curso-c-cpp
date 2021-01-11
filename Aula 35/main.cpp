#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool existe(char palavra[], char frase[]){
    int teste[ strlen(palavra) ];
    int aux;
    bool ok;


    if( strlen(palavra) > strlen(frase) ){
        return false;
    }

    if( strcmp(palavra,frase) ==0 ){
        return true;
    }

    for(int i=0; i <= strlen(frase) - strlen(palavra); i++){
        if(frase[i]==palavra[0]){

            for(int k=0;k<strlen(palavra);k++)
                teste[k]=0;

            aux=i;
            for(int j=0;j<strlen(palavra);j++){
                if(palavra[j]==frase[aux]){
                    teste[j]=1;
                    aux++;
                }
            }

            ok=true;
            for(int m=0;m<strlen(palavra);m++){
                if(teste[m]==0){
                    ok=false;
                }
            }

            if( ok ){
                return true;
            }
        }
    }
    return false;
}

int main(){
    char frase[]   = "O carro e azul";
    char palavra[] = "l";


    if(existe(palavra,frase)){
        printf("\n\nA palavra existe\n\n");
    }else{
        printf("\n\nA palavra nao existe\n\n");
    }

    system("pause");
    return 0;
}
