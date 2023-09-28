#include <fstream>
#include <iostream>

using namespace std;

int main() {

    ifstream is;
    string linha;

    is.open("alunos.txt");
    if(!is) {
        cout << "Erro! não é possível abrir o ficheiro";
        exit(1);
    }

    while(getline(is,linha)){
        cout << linha << endl;
    }
}