#include <iostream>

using namespace std;

int main(){

    string name;
    cout << "Insira o seu nome: ";
    getline(cin,name);

    cout << "Ola " << name << "!" << endl;

    return 0;
}