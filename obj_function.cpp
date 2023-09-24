#include <iostream>

using namespace std;

class Student {
    public:
        string nome;
        string uni;
        float media;
        string mestrado;

        Student() {
            nome = "Nao inserido";
            uni = "Nao inserido";
            media = 0;
            mestrado = "Nao inserido";
        }

        Student(string anome, string auni, float amedia, string amestrado) {
            nome = anome;
            uni = auni;
            media = amedia;
            mestrado = amestrado;
        }

        bool master(){
            if(mestrado != "Nao esta inserido") {
                return true;
            }
            return false;
        }

};


int main(){

    Student student1("Henrique","UTAD", 13, "Universidade de Barcelona");
    Student student2("Marcozki", "UTAD", 10, "Nao esta inserido");

    cout << student1.master() << endl;
    cout << student2.master() << endl;

    system("pause");
    return 0;
}