#include <stdio.h>
#include <stdlib.h>

void bubble(int vetor[],int n){
    int k = n;
    int aux;
    for(int i=0 ; i < n ;i++){
        for(int j=0;j<k;j++){
            if(vetor[j] > vetor[j+1]){
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
        k--;
    }
}


int main(){

    int vetor[]={3,5,8,1,9,2,4,7,0,6};
    int n=10;

    bubble(vetor,n);

    printf("\n\n\n");

    for(int i=0;i<n;i++)
        printf("%d - ",vetor[i]);

    printf("\n\n\n");

    system("pause");
    return 0;
}
