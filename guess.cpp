#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){ 


    srand(time(NULL));
    int escolha = rand()% 10;
    int num;

    while(num != escolha) {
        cout << "Tente adivinhar o numero: ";
        cin >> num;

        if (num > escolha) {
            cout << "O numero misterio e menor " << endl;
        } else if (num < escolha) {
            cout << "O numero misterio e maior" <<  endl;
        } else if (num == escolha) {
            cout << "Parabens adivinhou. O numero era: " << escolha << endl;
        } else {
            cout << "Insira um valor valido";
        }
    }

    system("pause");
    return 0;
}