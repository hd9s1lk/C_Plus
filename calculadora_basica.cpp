#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a,b;

    cout << "Insira o numero que deseja realizar as operacoes: ";
    cin >> a;
    cout << "Insira o segundo numero que deseja realizar as operacoes: ";
    cin >> b;

    cout << "Soma: " << a+b << endl;
    cout << "Subtracao: " << a-b << endl;
    cout << "Divisao: " << a/b << endl;
    cout << "Multiplicacao: " << a*b << endl;
    /*cout << "Resto da divisao: " << a%b << endl;*/
    cout << "Raiz Quadrada do primeiro algarismo: " << sqrt(a) << endl;
    cout << "Raiz Quadrada do segundo algarismo: " << sqrt(b) << endl;
    cout << "Expoente: " << pow(a,b) << endl;

    return 0;
}