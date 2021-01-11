#include <iostream>
#include "tipo_aluno.h"

using namespace std;

int main(){

    tipo_aluno Alunos[10];

    Alunos[0].set_nome("Lucas");
    Alunos[1].set_nome("Mateus");

    Alunos[0].set_nota(4.8,0);
    Alunos[0].set_nota(8.9,1);

    Alunos[1].set_nota(8.0,0);
    Alunos[1].set_nota(10,1);

    Alunos[0].imprime();
    Alunos[1].imprime();
    return 0;
}
