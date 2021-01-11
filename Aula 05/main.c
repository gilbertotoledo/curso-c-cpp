#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2, resultado;

    char operador;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    setbuf(stdin, NULL);

    //NULL =  NULO
    //STDIN STANDARD INPUT   >  ENTRADA PADRÃO  -  TECLADO

    //COLOCANDO NO BUFFER DO TECLADO O VALOR NULO


    printf("Digite a operacao ( + - * / ): ");
    scanf("%c", &operador);
    setbuf(stdin, NULL);


    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    setbuf(stdin, NULL);





    if( operador == '+' ){                         //se
        resultado = valor1 + valor2;
    }
    else if(operador == '-' ){                     //senao se
        resultado = valor1 - valor2;
    }
    else if(operador == '*' ){
        resultado = valor1 * valor2;
    }
    else if( operador == '/' ){
        resultado = valor1 / valor2;
    }
    else{                                         //senao
        printf("Operador invalido");
    }


    //== é para comparação

    // = é para atribuição

    printf("O Resultado da operacao e: %d", resultado);

    return 0;
}
