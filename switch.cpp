#include <iostream>

using namespace std;

string DiaSemana(int dia);

int main(){
    int dia;
    cout << "Insira um dia da semana: 0-6" << endl;
    cin >> dia;

    DiaSemana(dia);

    system("pause");
    return 0;
}

string DiaSemana(int dia){
    string NomeDia;

    switch(dia){
        case 0:
            cout << "Domingo" << endl;
            break;
        case 1:
            cout << "Segunda" << endl;
            break;
        case 2: 
            cout << "Terca" << endl;
            break;
        case 3:
            cout << "Quarta" << endl;
            break;
        case 4:
            cout << "Quinta" << endl;
            break;
        case 5: 
            cout << "Sexta" << endl;
            break;
        case 6: 
            cout << "Sabado" << endl;
            break;
        default:
            cout << "Dia invalido" << endl;
    }

    return NomeDia;
}