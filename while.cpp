#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int i = 1;
    int num;

    cout << "Insira um numero calcular a tabuada: ";
    cin >> num;

    while(i != 11){
        cout << num*i << endl;
        i++;
    }

    system("pause");
    return 0;
    
}