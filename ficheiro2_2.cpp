#include <fstream>
#include <iostream>

using namespace std;

class Aluno {
    public:
        char nome[30];
        int num, idade;
};


int main() {
    ifstream is;
    ofstream os;

    is.open("alunos2.txt");
    if(!is) {
        cout << "Erro! Nao e possivel abrir oo fiicheiro";
        exit(1);
    }

    os.open("alunos2.txt");
    if(!os) {
        cout << "Erro! Nao e possivel abrir o ficheiro";
        exit(1);
    }

    Aluno a;
    int i = 0;

    while(i!=3) {

        is >> a.idade >> a.num >> a.nome;

        cout << "Insira o seu nome: ";
        cin >> a.nome;

        cout << "Insira a sua idade: ";
        cin >> a.idade;

        cout << "Insira o seu numero mecanografico: ";
        cin >> a.num;

        os << a.nome <<"; " << a.idade << "; " << a.num << endl;

        i++;

    }

    is.close();
    os.close();
    system("pause");
    return 0;
    

    
}