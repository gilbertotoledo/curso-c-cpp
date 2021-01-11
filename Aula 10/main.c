#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome1[100], nome2[100];
    /*
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    setbuf(stdin,NULL);

    printf("Nome: %s\n\n", nome);
    */

    //Digita: Nome e sobrenome  -  16 char
    //         0123456        15 16 '\0'
    /*
    printf("Digite o nome 1: ");
    gets(nome1);

    setbuf(stdin,NULL);

    //printf("Digite o nome 2: ");
    //gets(nome2);


    //STRCMP = verifica letras em maiúscula e minúscula
    //STRCASECMP = ignora maiúsculas e minúsculas

    if( strcasecmp(nome1,nome2)==0 ){  //Valor 0 é verdadeiro - vetores são iguais
        printf("\n\nnomes iguais!\n\n");
    }
    else{
        printf("\n\nnomes diferentes!\n\n");
    }
    */

    printf("Digite o nome: ");
    gets(nome1);
    setbuf(stdin,NULL);
    //strcpy(nome2,nome1); //strcpy(onde será copiado, o que será copiado);

    //printf("Vetor 2: %s\n\n", nome2);

    //printf("Nome tem %d letras", strlen(nome1)); //STRLEN retorna o TAMANHO DO VETOR

    printf("Digite o sobrenome: ");
    gets(nome2);
    strcat(nome1," ");

    strcat(nome1,nome2);
    printf("\n\nNome: %s\n", nome1);

    system("pause");
    return 0;
}
