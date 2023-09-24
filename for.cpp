#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int num;

    cout << "Insira um numero: ";
    cin >> num;

    for(int i = 1; i <= 10; i++) {
        cout << num*i << endl;
    }

    system("pause");
    return 0;
}