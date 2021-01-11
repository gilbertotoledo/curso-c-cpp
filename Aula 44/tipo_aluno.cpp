#include "tipo_aluno.h"
#include <string.h>

bool tipo_aluno::set_nome(char novo_nome[]){
    if(strlen(novo_nome)<50){
        strcpy(nome,novo_nome);
        return true;
    }else{
        return false;
    }
}

bool tipo_aluno::set_telefone(char novo_telefone[]){
    if(strlen(novo_telefone)<15){
        strcpy(telefone,novo_telefone);
        return true;
    }else{
        return false;
    }
}

bool tipo_aluno::set_nota(float novo_nota, int indice){
    if(indice>0 && indice<3){
        notas[indice]=novo_nota;
        return true;
    }else{
        return false;
    }
}

void tipo_aluno::get_nome(char nome[]){
    strcpy(nome,this->nome);
}

void tipo_aluno::get_telefone(char telefone[]){
    strcpy(telefone,this->telefone);
}

float tipo_aluno::get_nota(int indice){
    if(indice>0 && indice<3){
        return notas[indice];
    }else{
        return -1;
    }
}
