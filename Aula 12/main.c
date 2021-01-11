/*




*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char banco[3][10]={
        "cavalo",
        "cachorro",
        "papagaio"};

    char PALAVRA[10];
    int palavra=0;
    int i;
    //imprimir linha da matriz
    //for(i=0;i<10;i++){
    //    printf("%c", banco[palavra][i]);
    //}

    srand(time(NULL));
    palavra = rand() % 3;

    //copiar linha da matriz para vetor
    for(i=0;i<10;i++){
        PALAVRA[i]=banco[palavra][i];
    }
    printf("\n\n\n%s\n\n",PALAVRA);

    printf("\n _ _ _ _ _ \n\n");

    system("pause");
    return 0;
}
