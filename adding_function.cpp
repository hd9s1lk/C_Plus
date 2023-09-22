#include <iostream>

using namespace std;

double soma(double a, double b){
    cout << a+b;

    return 0;
}

int main(){

    double a;
    double b;

    cout << "Insira o primeiro numero: " << endl;
    cin >> a;
    cout << "Insira o segundo numero: " << endl;
    cin >> b;

    soma(a,b);



    system("pause");
    return 0;
}