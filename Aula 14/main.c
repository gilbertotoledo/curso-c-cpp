#include <stdio.h>
#include <stdlib.h>

int imprime(int inicio, int limite){
    if(inicio<limite){
        printf("%d ", inicio);
        imprime(inicio+1, limite);
    }
}


int main(){
    int inicio, limite, i;

    inicio=10;
    limite=200;
    printf("\n\nImpressao ITERATIVA\n");
    for(i=inicio;i<limite;i++){
        printf("%d ", i);
    }

    printf("\n\nImpressao RECURSIVA\n");
    imprime(inicio, limite);
    //imprime(10,20);

    printf("\n\n");
    system("pause");
    return 0;
}
