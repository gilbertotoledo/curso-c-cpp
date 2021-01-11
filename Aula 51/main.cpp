#include <iostream>

using namespace std;

void troco(float valor){

    enum{nota100,nota50,nota20,nota10,nota5,nota2};
    enum{moeda1,moeda50,moeda25,moeda10,moeda5,moeda01};

    int quant_notas[6];
    int quant_moedas[6];

    quant_notas[nota100] = (int)valor/100;
    valor = valor - (quant_notas[nota100]*100);

    quant_notas[nota50] = (int)valor/50;
    valor = valor - (quant_notas[nota50]*50);

    quant_notas[nota20] = (int)valor/20;
    valor = valor - (quant_notas[nota20]*20);

    quant_notas[nota10] = (int)valor/10;
    valor = valor - (quant_notas[nota10]*10);

    quant_notas[nota5] = (int)valor/5;
    valor = valor - (quant_notas[nota5]*5);

    quant_notas[nota2] = (int)valor/2;
    valor = valor - (quant_notas[nota2]*2);


    quant_moedas[moeda1] = (int)(valor/1);
    valor = valor - (quant_moedas[moeda1]*1);


    quant_moedas[moeda50] = (int)(valor/0.50);
    valor = valor - (quant_moedas[moeda50]*0.50);

    quant_moedas[moeda25] = (int)(valor/0.25);
    valor = valor - (quant_moedas[moeda25]*0.25);

    quant_moedas[moeda10] = (int)(valor/0.10);
    valor = valor - (quant_moedas[moeda10]*0.10);

    quant_moedas[moeda5] = (int)(valor/0.05);
    valor = valor - (quant_moedas[moeda5]*0.05);

    quant_moedas[moeda01] = (int)(valor/0.01) + 1;
    valor = valor - (quant_moedas[moeda01]*0.01);


    cout<<"\nNotas de 100,00: "<<quant_notas[nota100];
    cout<<"\nNotas de 50,00: "<<quant_notas[nota50];
    cout<<"\nNotas de 20,00: "<<quant_notas[nota20];
    cout<<"\nNotas de 10,00: "<<quant_notas[nota10];
    cout<<"\nNotas de 5,00: "<<quant_notas[nota5];
    cout<<"\nNotas de 2,00: "<<quant_notas[nota2];

    cout<<"\n\nMoedas de 1,00: "<<quant_moedas[moeda1];
    cout<<"\nMoedas de 0,50: "<<quant_moedas[moeda50];
    cout<<"\nMoedas de 0,25: "<<quant_moedas[moeda25];
    cout<<"\nMoedas de 0,10: "<<quant_moedas[moeda10];
    cout<<"\nMoedas de 0,05: "<<quant_moedas[moeda5];
    cout<<"\nMoedas de 0,01: "<<quant_moedas[moeda01];
}


int main(){
    float valor;
    cout << "Digite um valor: " << endl;
    cin>>valor;

    troco(valor);

    return 0;
}
