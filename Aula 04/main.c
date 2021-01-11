#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2, resultado;

    char operador;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

        resultado = valor1 - valor2;

    printf("A subtracao dos valores e: %d", resultado);

    return 0;
}
