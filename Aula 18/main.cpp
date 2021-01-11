#include <stdio.h>
#include <stdlib.h>

/*
Outras Funções para manupulação de arquivos

FPUTC - Grava 1 Caracter no arquivo
FGETC - Lê 1 Caracter do arquivo

FPUTS - Grava uma sequência de Caracteres no arquivo
FGETS - Lê uma sequência de Caracteres do arquivo

FWRITE - Grava certa quantidade de bytes no arquivo
FREAD - Lê certa quantidade de bytes do arquivo

www.cplusplus.com/reference/

*/


int main(){
    char vetor[6];
    int valor;
    FILE *arquivo;

    arquivo = fopen("teste.txt","wt"); //wt = Gravação
                                       //rt = Leitura
                                       //a  = append

    if(arquivo==NULL){      //Se houver algum erro, o ponteiro apontará para NULL
        printf("Nao foi possivel abrir o arquivo");
        exit(0);
    }

    fprintf(arquivo,"Teste 456");

    fclose(arquivo);

    arquivo = fopen("teste.txt","rt"); //wt = Gravação
                                       //rt = Leitura
                                       //a  = append

    if(arquivo==NULL){      //Se houver algum erro, o ponteiro apontará para NULL
        printf("Nao foi possivel abrir o arquivo");
        exit(0);
    }

    fscanf(arquivo,"%s %d", &vetor, &valor);
    printf("\n\n%s %d\n\n", vetor, valor);

    fclose(arquivo);

    system("pause");
    return 0;
}
