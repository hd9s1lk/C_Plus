#include <iostream>

using namespace std;

string DiaSemana(int dia);

int main(){

    cout << DiaSemana(0) << endl;

    system("pause");
    return 0;
}

string DiaSemana(int dia){
    string NomeDia;

    switch(dia){
        case 0:
            NomeDia = "Domingo";
            break;
        case 1:
            NomeDia = "Segunda";
            break;
        case 2: 
            NomeDia = "Terça";
            break;
        case 3:
            NomeDia = "Quarta";
            break;
        case 4:
            NomeDia = "Quinta";
            break;
        case 5: 
            NomeDia = "Sexta";
            break;
        case 6: 
            NomeDia = "Sábado";
            break;
        default:
            NomeDia = "Dia invalido";
    }

    return NomeDia;
}