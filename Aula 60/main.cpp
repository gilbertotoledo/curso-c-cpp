#include <iostream>
#include <stdlib.h>
#include <time.h>

#define TAM 1000
//const int TAM = 1000;


using namespace std;

struct Tipo_transacao{
    char descricao[150];
    int dia;
    int mes;
    int ano;
    char tipo; // C ou D
    float valor;
};

Tipo_transacao CapturaDados(){
    Tipo_transacao temp;

    char data[9];
    _strdate(data);

    //MM/DD/AAAA

    char dia[3], mes[3], ano[4];
    dia[0] = data[3];
    dia[1] = data[4];

    mes[0] = data[0];
    mes[1] = data[1];

    ano[0] = data[6];
    ano[1] = data[7];
    ano[2] = data[8];
    ano[3] = data[9];


    cout<<" Tipo:\n";
    cout<<"  D - DEBITO\n  C - CREDITO";
    cout<<"\nInforme o tipo: ";
    cin>>temp.tipo;

    cout<<"Descricao: ";
    cin>>temp.descricao;

    cout<<"Valor: ";
    cin>>temp.valor;

    temp.dia = atoi(dia);
    temp.mes = atoi(mes);
    temp.ano = atoi(ano);

    return temp;
}

bool RegistrarOperacao(Tipo_transacao op, Tipo_transacao operacoes[TAM], int ind){

}

void ConsultarExtrato(Tipo_transacao ops[TAM], int cont){

}

int main(){
    int opcao;
    int cont = 0;
    Tipo_transacao operacoes[TAM];
    Tipo_transacao aux;


    while(1){
        system("cls");
        cout<<"\n\tBem vindo ao Banco G-TECH\n";
        cout<<"\n Menu:\n";
        cout<<" 1 - Efetuar operacao\n";
        cout<<" 2 - Consultar extrato\n";
        cout<<" 3 - Sair\n";

        cout<<"\nDigite a opcao desejada: ";
        cin>>opcao;

        switch(opcao){
        case 1:
            system("cls");
            aux = CapturaDados();
            if(RegistrarOperacao(aux,operacoes, cont)){
                cout<<"\nOperacao registrada\n";
                cont++;
            }else{
                cout<<"\nErro ao registrar a operacao! Tente novamente!\n";
            }
            system("pause");
            break;
        case 2:

            break;
        case 3:
            cout<<"\n\nFinalizando...\n\n";
            system("pause");
            exit(0);
            break;
        default:
            cout<<"\nOpcao invalida! Tente novamente!\n";
        }
    }
    return 0;
}
