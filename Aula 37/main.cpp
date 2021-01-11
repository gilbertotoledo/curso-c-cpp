#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Configuração da Chave para criptografia
char CHAVE[]="AbCd";
int TAM_CHAVE=strlen(CHAVE);
//----------------------------------------

// Vetor de entrada do texto a ser criptografado
char TEXTO[100000];
int TAM_TEXTO=100000;
//----------------------------------------------

bool Criptografar(){
    return true;
}


void Recebe_texto(char tipo[]){
    char aux[TAM_TEXTO];
    char pause;

    FILE *arquivo;
    char palavra[100];
    if(strcmp(tipo,"msg")==0){
        printf("\n\nReceber texto para criptografar");
        printf("\n\nDigite o texto: ");
        gets(aux);

        if( strlen(aux) <= TAM_TEXTO){
            strcpy(TEXTO,aux);
            printf("\n\nTexto recebido com sucesso!");
            printf("\n\nCriptografando texto...\n\n");

            if(Criptografar()){
                printf("\n\nTexto criptografado com sucesso!");
                printf("\n\nPressione enter para abrir a pasta do arquivo gerado!\n");
                scanf("%c",&pause);
                setbuf(stdin,NULL);
                system("explorer c:\\cript\\arquivos_gerados\\");
            }else{
                printf("\n\nNao foi possivel criptografar o texto!\n\n");
            }
        }else{
            printf("\n\nErro!\nTamanho do texto excede o limite de caracteres\n\n");
        }

        system("pause");
    }else if(strcmp(tipo,"arquivo")==0){
        printf("\n\nInstrucoes para importar um arquivo de texto:");
        printf("\n\n 1 - Renomeie o arquivo para 'original.txt'");
        printf("\n\n 2 - Copie o arquivo para a pasta que sera aberta a seguir");
        printf("\n\n 3 - Feche o explorador e retorne a aplicacao");

        printf("\n\n\n Pressione Enter para abrir a pasta");
        scanf("%c",&pause);
        setbuf(stdin,NULL);

        system("explorer c:\\cript\\arquivos_originais\\");

        printf("\n\nPressione enter apos colar o arquivo na pasta...\n");
        scanf("%c",&pause);
        printf("\n\nImportando arquivo...\n\n");

        arquivo = fopen("c:\\Cript\\arquivos_originais\\original.txt","r");
        if(arquivo==NULL){
             printf("\n\nErro ao abrir o arquivo...\n\n");
        }else{
            while(!feof(arquivo)){
                fscanf(arquivo,"%s",palavra);
                strcat(aux," ");
                strcat(aux,palavra);
            }

            if( strlen(aux) <= TAM_TEXTO){
                strcpy(TEXTO,aux);
                printf("\n\nTexto recebido com sucesso!");
                printf("\n\nCriptografando texto...\n\n");

                if(Criptografar()){
                    printf("\n\nTexto criptografado com sucesso!");
                    printf("\n\nPressione enter para abrir a pasta do arquivo gerado!\n");
                    scanf("%c",&pause);
                    setbuf(stdin,NULL);
                    system("explorer c:\\cript\\arquivos_originais\\");
                }else{
                    printf("\n\nNao foi possivel criptografar o texto!\n\n");
                }
            }else{
                printf("\n\nErro!\nTamanho do texto excede o limite de caracteres\n\n");
            }
        }
        system("pause");
    }else{
        printf("\n\nErro ao receber texto\n\n");
    }
}

void Receber_Arquivo(){

}

void Menu_Criptografar(){
    int opcao;
    printf("\n\tCriptografia de dados");
    printf("\n\n Criptografar texto ou arquivo");
    printf("\n\n\n 1 - Digitar texto");
    printf("\n\n 2 - Importar arquivo de texto (txt)");
    printf("\n\n 3 - Voltar ao menu principal");
    printf("\n\n Informe a opcao desejada: ");
    scanf("%d",&opcao);
    setbuf(stdin,NULL);
    switch(opcao){
    case 1:
        system("cls");
        Recebe_texto("msg");
        break;
    case 2:
        system("cls");
        Recebe_texto("arquivo");
        break;
    case 3:
        break;
    default:
        printf("Opcao invalida! Tente novamente...");
    }
}

void Menu(){
    int opcao;
    while(1){
        system("cls");
        printf("\n\tCriptografia de dados");
        printf("\n\n 1 - Criptografar texto ou arquivo");
        printf("\n\n 2 - Receber arquivo");
        printf("\n\n 3 - Sair");
        printf("\n\n Informe a opcao desejada: ");
        scanf("%d",&opcao);
        setbuf(stdin,NULL);
        switch(opcao){
        case 1:
            system("cls");
            Menu_Criptografar();
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
