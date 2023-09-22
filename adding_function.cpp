#include <iostream>

using namespace std;

void soma(int a, int b){
    cout << a+b << endl;

}

int main(){

    int a;
    int b;

    cout << "Insira o primeiro numero: " << endl;
    cin >> a;
    cout << "Insira o segundo numero: " << endl;
    cin >> b;

    soma(a,b);



    system("pause");
    return 0;
}