#include <iostream>
#include "tipo_aluno.h"

using namespace std;

int main(){
    char nome[50];
    tipo_aluno Aluno1;

    if(Aluno1.set_nome("Fulano da silva")){
        Aluno1.get_nome(nome);
        cout<<"Aluno 1: "<<nome<<endl;
    }else{
        cout<<"Nao foi possivel alterar o nome!\n\n";
    }

    if(Aluno1.set_nota(5.5,1)){
        cout<<"Nota 1: "<<Aluno1.get_nota(1)<<endl;
    }else{
        cout<<"Erro ao alterar a nota";
    }

    if(Aluno1.set_nota(7,2)){
        cout<<"Nota 2: "<<Aluno1.get_nota(2)<<endl;
    }else{
        cout<<"Erro ao alterar a nota";
    }

    if(Aluno1.set_nota(8,4)){
        cout<<"Nota 4: "<<Aluno1.get_nota(4)<<endl;
    }else{
        cout<<"Erro ao alterar a nota";
    }


    return 0;
}
