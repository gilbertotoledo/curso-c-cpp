#include <stdio.h>
#include <stdlib.h>

void altera(int &x, int &y){
    x=5;
    y=20;
}

int main(){

    int a, b;

    a=1;
    b=200;

    altera(a,b);

    printf("\n\nA=%d  |  B=%d\n\n", a, b);

    system("pause");
    return 0;
}
