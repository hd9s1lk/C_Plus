#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "Insira um numero: ";
    cin >> num;

    if(num%2 == 0) {
        cout << "O numero e par!" << endl;
    } else if(num%2 != 0){
        cout << "O numero e impar!" << endl;
    } else {
        cout << "Insira um valor valido!" << endl;
    }

    system("pause");
    return 0;
}