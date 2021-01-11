#ifndef TIPO_ALUNO_H_INCLUDED
#define TIPO_ALUNO_H_INCLUDED

class tipo_aluno{
    private:
        char nome[50];
        char telefone[15];
        float notas[3];

    public:
        bool set_nome(char novo_nome[]);
        bool set_telefone(char novo_telefone[]);
        bool set_nota(float nota, int novo_indice);

        void get_nome(char nome[]);
        void get_telefone(char telefone[]);
        float get_nota(int indice);

};


#endif // TIPO_ALUNO_H_INCLUDED
