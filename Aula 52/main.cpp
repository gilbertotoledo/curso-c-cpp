#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

void troca(char vet[50],char encontra, char troca){
    for(int i=0;i<50;i++){
        if(vet[i]==encontra){
            vet[i]=troca;
        }
    }
}

bool procura(char desc[50],int &quant, float &valor){
    char desc_lida[50];
    int quant_lida;
    float valor_lido;

    troca(desc,' ','_');

    FILE *arquivo;

    arquivo = fopen("estoque.txt","r");
    while(!feof(arquivo)){
        setbuf(stdin,NULL);
        fscanf(arquivo,"%d %s %f",&quant_lida,&desc_lida,&valor_lido);
        if(strcmp(desc_lida,desc)==0){
            quant=quant_lida;
            valor=valor_lido;
            fclose(arquivo);
            troca(desc,'_',' ');
            return true;
        }
    }
    fclose(arquivo);
    return false;
}

int main(){
    char desc[50];
    int quant;
    float valor;

    while(1){
        system("cls");
        cout<<"Bem vindo ao Consulta Estoque" << endl;
        cout<<"Informe a descricao do produto: ";
        //cin>>desc;
        //gets(desc);
        cin.get(desc,50);

        if(procura(desc,quant,valor)){
            cout<<"\nProduto: "<<desc;
            cout<<"\nQuant. em estoque: "<<quant;
            cout<<"\nValor: "<<valor<<"\n\n";
            system("pause");
        }else{
            cout<<"\n\nProduto nao encontrado!\n\n";
            system("pause");
        }



    }
    return 0;
}
