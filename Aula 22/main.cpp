#include <stdio.h>
#include <stdlib.h>

void selecao(int Vet[],int n){

    int Menor, aux;

    for(int i=0;i<n-1;i++){
        Menor=i;
        for(int j=i+1 ; j<n ; j++){
            if(Vet[Menor] > Vet[j])
                Menor=j;
        }
        if(i!=Menor){
            aux=Vet[i];
            Vet[i]=Vet[Menor];
            Vet[Menor]=aux;
        }
    }
}

int main(){

    int n=13;
    int Vetor[] = {3,6,5,1,2,8,7,9,4,10,13,12,11};

    selecao(Vetor,n);

    printf("\n\n ");

    for(int i=0;i<n;i++){
        printf("%d - ",Vetor[i]);
    }

    printf("\n\n\n");

    system("pause");
    return 0;
}
