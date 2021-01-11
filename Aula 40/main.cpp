#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TipoCelula{
    char letra;
    int cont;
};

int Comprime(char original[], TipoCelula Comp[]){
    int i, i_orig=0, j;
    for(i=0; i<1000;i++){

        for(j=i_orig ; j < strlen(original) ; j++){
            if(original[j] != original[j+1])
                break;
        }

        Comp[i].cont = j-i_orig + 1;
        Comp[i].letra = original[i_orig];

        if( i_orig < strlen(original) ){
                i_orig = j+1;
        }else{
            break;
        }
    }
    return i;
}

int main(){

    char Original[]="AAAABBKKKKWWWWWWWWWWWWOORTT";
    int Contador;
    TipoCelula Comp[1000];

    Contador = Comprime(Original,Comp);
    printf("\n%s\n\n",Original);
    for(int i=0;i< Contador;i++){
        printf("%c%d",Comp[i].letra,Comp[i].cont);
    }
    printf("\n\n");

    system("pause");
    return 0;
}
