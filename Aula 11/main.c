#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    /*
    enum semana{dom,seg,ter,qua,qui,sex,sab}; //lista em ordem crescente, sendo a primeira variável 0

    int diasemana=sab;  //1 é segunda feira

    if(diasemana==dom || diasemana==sab){//0 é domingo  - 6 é sábado
        printf("\n\nDia de folga\n\n");
    }
    else{
        printf("\n\nDia de Trabalho\n\n");
    }
    */

    struct TipoAluno{
        int Nota;
        char Nome[30];
    };

    struct TipoAluno Alunos[2];

    Alunos[0].Nota=10;
    strcpy(Alunos[0].Nome,"Marcos");

    Alunos[1].Nota=5;
    strcpy(Alunos[1].Nome,"Roberto");
    int i;
    for(i=0;i<2;i++){
        printf("Aluno: %s  - Nota: %d\n", Alunos[i].Nome, Alunos[i].Nota);
    }

    system("pause");
    return 0;
}
