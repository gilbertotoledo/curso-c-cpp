#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

bool ExisteLetra(char letra, char Palavra[]){
    for(int i=0;i<strlen(Palavra);i++){
        if(Palavra[i]==letra)
            return true;
    }
    return false;
}


float Porcentagem(char letra, char texto[]){
    if(strlen(texto)<1) return 0;
    if(strlen(texto)>1000) return 0;

    int ContPalavras = 0;
    int ContPalavrasLetra = 0;

    char palavra[1000] = "";

    char aux[2];

    for(int i=0;i<strlen(texto);i++){
        if(texto[i]==' ' || i+1 == strlen(texto)){

            if(i+1 == strlen(texto))
                aux[0] = texto[i];
                aux[1] = '\0';
                strcat(palavra,aux);

            ContPalavras++;

            if(ExisteLetra(letra,palavra))
                ContPalavrasLetra++;

            strcpy(palavra,"");
        }else{

            aux[0] = texto[i];
            aux[1] = '\0';
            strcat(palavra,aux);
        }
    }
    //cout<<ContPalavras<<" - "<<ContPalavrasLetra<<endl;
    return ( (float) ContPalavrasLetra / (float) ContPalavras ) * 100.0;
}


int main(){
    char letra ;
    char texto[1000];

    float porcentagem;
    cout << "Seja bem vindo" << endl;

    cout<<"Digite a letra: ";
    cin>>letra;


    setbuf(stdin,NULL);

    cout<<"\nDigite o texto: \n";
    //cin>>texto;
    gets(texto);

    porcentagem = Porcentagem(letra,texto);

    //cout<<"Porcentagem: "<<porcentagem<<"%\n\n";
    printf("Porcentagem: %.1f",porcentagem);
    return 0;
}

