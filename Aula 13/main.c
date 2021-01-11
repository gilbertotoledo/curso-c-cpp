#include <stdio.h>
#include <stdlib.h>

int quadrado(int valor){ //tem retorno
    valor=valor*valor;
    return valor;
}

void quadradoimprime(int valor){ //não tem retorno
    valor=valor*valor;
    printf("\n\nQuadrado Imprime: %d\n\n", valor);

}

int main(){
    int valor, resultado;

    printf("\nDigite um valor: ");
    scanf("%d", &valor);

    resultado = quadrado(valor);
    printf("\n\nQuadrado: %d\n\n", resultado);


    quadradoimprime(valor);


    system("pause");

    return 0;
}
