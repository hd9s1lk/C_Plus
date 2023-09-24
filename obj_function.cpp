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
            setMedia(amedia);
            mestrado = amestrado;
        }

        bool master(){
            if(mestrado != "Nao esta inserido") {
                return true;
            }
            return false;
        }

        float setMedia(float amedia) {  //criar regras na media e alteracao da mesma
            if (amedia >= 0 && amedia <=20) {
                media = amedia;
            } else {
                media = 0;
            }
            return 0;
        }
        float getMedia() {
            return media;
        }
    
};


int main(){

    Student student1("Henrique","UTAD", 13, "Universidade de Barcelona");
    Student student2("Marcozki", "UTAD", 10, "Nao esta inserido");

    student1.setMedia(15);

    cout << student1.getMedia() << endl;


    cout << student1.master() << endl;
    cout << student2.master() << endl;

    system("pause");
    return 0;
}