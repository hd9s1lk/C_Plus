#include <iostream>

using namespace std;

int comp(int a, int b, int c){
    int maior;

    if (a > b){
        maior = a;
    } else {
        maior = b;
    }

    if (maior < c) {
        maior = c;
    } else {
        maior = maior;
    }

    return maior;
}


int main(){

    cout << "O maior numero e: " << comp(2,3,4) << endl;

    system("pause");
    return 0;
}