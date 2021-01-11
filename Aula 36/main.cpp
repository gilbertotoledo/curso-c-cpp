#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Configuração da Chave para criptografia
char CHAVE[]="AbCd";
int TAM_CHAVE=strlen(CHAVE);
//----------------------------------------

void Receber_Arquivo(){

}

void Criptografar(){

}

void Menu(){
    int opcao;
    while(1){
        system("cls");
        printf("\n\tCriptografia de dados");
        printf("\n\n 1 - Criptografar mensagem");
        printf("\n\n 2 - Receber arquivo");
        printf("\n\n 3 - Sair");
        printf("\n\n Informe a opcao desejada: ");
        scanf("%d",&opcao);
        setbuf(stdin,NULL);
        switch(opcao){
        case 1:
            system("cls");
            Criptografar();
            break;
        case 2:
            system("cls");
            Receber_Arquivo();
            break;
        case 3:
            printf("\nFinalizando...\n\n");
            system("pause");
            exit(0);
            break;
        default:
            printf("Opcao invalida! Tente novamente...");
        }
    }
}

int main(){

    Menu();

    return 0;
}
