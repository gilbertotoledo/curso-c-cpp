#include <stdio.h>
#include <time.h>

int main(){
    double inicio = clock();

    //GERAR 30 MIL NUMEROS SEQUENCIAIS
    /*
    int i;
    for(i=1;i<=30000;i++){
        printf("%d\n",i);
    }
    */
    //GERAR 30 MIL NÚMEROS ALEATÓRIOS DE 0 A 50 MIL COM REPETIÇÃO
    /*
    int i;
    srand(time(NULL));
    int numeros[30000];
    int numero;
    for(i=0;i<30000;i++){
        numero = rand() % 50000;
        numeros[i] = numero;
        printf("%d\n", numero);
    }
    */

    //GERAR 30 MIL NÚMEROS ALEATÓRIOS DE 0 A 50 MIL SEM REPETIÇÃO
    /*
    int i,j, existe;
    srand(time(NULL));
    int numeros[30000];
    int numero;
    for(i=0;i<30000;i++){
        do{
            numero = rand() % 50000;
            existe = 0; //0 -> NÃO EXISTE |  1 -> EXISTE
            for(j=0;j<i;j++){
                if(numeros[j]==numero){
                    existe = 1;
                    break;
                }
            }
        }while(existe==1);

        numeros[i] = numero;
        printf("%d\n", numero);
    }
    */

    //GERAR OS PRIMEIROS 10 MIL NUMEROS PRIMOS

    int numeros[10000];
    int numero, primo;
    int i, j, divisores;
    numero = 2;
    for (i = 0; i < 10000; i++) {
        do{
            divisores = 0;
            for (j = 1; j <= numero; j++) {
                if (numero % j == 0) {
                    divisores++;
                }
                if(divisores>2)
                    break;
            }
            if(divisores>2){
                primo=0;
                numero++;
            }else{
                primo=1;
            }
        }while(primo==0);//0 -> NÃO PRIMO |  1 -> PRIMO
        numeros[i] = numero;
        printf("%d\n", numero);
        numero++;
    }


    double fim = clock();
    double Tempo = (fim - inicio) / CLOCKS_PER_SEC;

    printf("\n\nTempo de execucao: %lf",Tempo);
    return 0;
}
