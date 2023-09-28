#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream is;
    ofstream os;

    is.open("alunos.txt");
    if(!is) {
        cout << "Erro! não é possível abrir o ficheiro";
        exit(1);
    }

    os.open("alunos.txt");
    if(!os) {
        cout << "Erro! não é possível abrir o ficheiro";
        exit(1);
    }

    int idade, num, i;
    char nome[30];

    i=0;

    while(i!=3) {

        is >> idade >> num >> nome;

        cout << "Insira o seu nome: ";
        cin >> nome;

        cout << "Insira a sua idade: ";
        cin >> idade;

        cout << "Insira o seu numero mecanografico: ";
        cin >> num;

        os << nome <<"; " << idade << "; " << num << endl;

        i++;

    }

    is.close();
    os.close();
    system("pause");
    return 0;
     
}