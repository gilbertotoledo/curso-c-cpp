#include "tipo_aluno.h"
#include <iostream>
#include <string.h>

using namespace std;


tipo_aluno::tipo_aluno(){
    notas[0]=0;
    notas[1]=0;
    notas[2]=0;
}

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
    if(indice>=0 && indice<=2){
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
    if(indice>=0 && indice<=2){
        return notas[indice];
    }else{
        return -1;
    }
}

float tipo_aluno::media(){
    return (notas[0]+notas[1]+notas[2])/3;
}

void tipo_aluno::imprime(){

    cout<<"Aluno: "<<nome<<endl;
    cout<<"Av1: "<<notas[0]<<endl;
    cout<<"Av2: "<<notas[1]<<endl;
    cout<<"Av3: "<<notas[2]<<endl<<endl;
    cout<<"Media das avaliacoes: "<<media()<<endl;
}


