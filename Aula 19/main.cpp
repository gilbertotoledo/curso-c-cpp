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

FILE* AbreArquivo(char modo, char caminho[30]){
    FILE *arquivo;
    switch(modo){
        case 'g':
            arquivo = fopen(caminho,"wt");
            break;
        case 'l':
            arquivo = fopen(caminho,"rt");
            break;
        case 'a':
            arquivo = fopen(caminho,"a");
            break;
    }
    if(arquivo==NULL){      //Se houver algum erro, o ponteiro apontará para NULL
        printf("Nao foi possivel abrir o arquivo");
        exit(0);
    }
    return arquivo;
}


void FecharArquivo(FILE *arquivo){
    fclose(arquivo);
}


int main(){
    char vetor[6];
    int valor;
    FILE *arquivo;

    arquivo = AbreArquivo('g',"teste.txt");

    fprintf(arquivo,"Teste 456");

    FecharArquivo(arquivo);

    arquivo = AbreArquivo('l',"teste.txt");

    fscanf(arquivo,"%s %d", &vetor, &valor);
    printf("\n\n%s %d\n\n", vetor, valor);

    FecharArquivo(arquivo);

    system("pause");
    return 0;
}
