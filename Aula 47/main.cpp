#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int quant_palavras = 5;

char banco[quant_palavras][30]={
"cachorro",
"computador",
"cadeira",
"automovel",
"edificio"};

char palavra_sort[30];
char palavra_dig[30];



int Sorteia(){
    srand(time(NULL));
    return rand() % (quant_palavras);
}

void imprime_palavra(int palavra){
    for(int i=0;i<30;i++){
        cout<<banco[palavra][i];
    }
}

void copia(int ind){
    for(int i=0;i<30;i++){
        palavra_sort[i] = banco[ind][i];
    }
}

void limpa_palavra_dig(){
    for(int i=0;i<30;i++){
        palavra_dig[i] = '_';
    }
}

void imprime_forca(int let_erro){
    switch(let_erro){
         case 0:
            cout<<"  ______ ";
            cout<<" |       ";
            cout<<" |       ";
            cout<<" |       ";
            cout<<" |       ";
            break;
        case 1:
            cout<<"  ______ ";
            cout<<" |     O ";
            cout<<" |       ";
            cout<<" |       ";
            cout<<" |       ";
            break;
        case 2:
            cout<<"  ______ ";
            cout<<" |     O ";
            cout<<" |     | ";
            cout<<" |       ";
            cout<<" |       ";
            break;
        case 3:
            cout<<"  ______ ";
            cout<<" |     O ";
            cout<<" |    /| ";
            cout<<" |       ";
            cout<<" |       ";
            break;
        case 4:
            cout<<"  ______ ";
            cout<<" |     O ";
            cout<<" |    /|\\";
            cout<<" |       ";
            cout<<" |       ";
            break;
        case 5:
            cout<<"  ______ ";
            cout<<" |     O ";
            cout<<" |    /|\\";
            cout<<" |    /  ";
            cout<<" |       ";
            break;
        case 6:
            cout<<"  ______ ";
            cout<<" |     O ";
            cout<<" |    /|\\";
            cout<<" |    / \\";
            cout<<" |       ";
            break;
    }
}

int main(){
    limpa_palavra_dig(); // Função responsável por limpar o vetor da palavra digitada

    int cont_let_dig=0;      // contador de letras digitadas
    int ind_palavra = Sorteia(); //Sortear uma palavra

    char letras_digitadas[26];

    while(cont_let_dig<=6){



    }

    return 0;
}
