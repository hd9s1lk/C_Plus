#include <iostream>
#include <cmath>

using namespace std;

float soma(float a, float b){
    cout << "O valor final e de: " << a+b << endl;
    return 0;
}

float subtracao(float a, float b){
    cout << "O valor final e de: " << a-b << endl;
    return 0;
}

float divisao(float a, float b){
    cout << "O valor final e de: " << a/b << endl;
    return 0;
}

float multiplicacao(float a, float b){
    cout << "O valor final e de: " << a*b << endl;
    return 0;
}

float expoente(float a, float b){
    cout << "O valor final e de: " << pow(a,b) << endl;
    return 0;
}


int main(){
    float a,b;
    int op;

    cout << "Insira o primeiro valor: ";
    cin >> a;
    cout << "Insira o segundo valor: ";
    cin >> b;
    cout << "Insira a operacao que deseja realizar:  1-Soma, 2-Subtracao 3-Divisao 4-Multiplicacao 5-Expoente" << endl;
    cin >> op;


    if (op == 1) {
        soma(a,b);
    } else if(op == 2){
        subtracao(a,b);
    } else if(op == 3) {
        divisao(a,b);
    } else if (op == 4) {
        multiplicacao(a,b);
    } else if (op == 5){
        expoente(a,b);
    } else {
        cout << "Insira um valor válido";
    }

    system("pause");
    return 0;
}