#include <iostream>

using namespace std;

int main(){

    int age = 20;
    int *pAge = &age;

    cout << pAge; //Morada da variavel
    cout << *pAge; //Valor da variavel

    system("pause");
    return 0;
}