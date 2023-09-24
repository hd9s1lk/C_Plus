#include <iostream>

using namespace std;

class Chef {
    public:
        void Galinha() {
            cout << "Cozinhar Galinha" << endl;
        }
        void Salada() {
            cout << "Fazer Salada" << endl;
        }
        void Marabilha() {
            cout << "A maravilhosa francesinha!" << endl;
        }
};

class ChefItaliano : public Chef {
    public:
        void Marabilha() {
            cout << "A maravilhosa esparguete!" << endl;
        }
};

int main(){

    Chef chef;
    chef.Marabilha();

    ChefItaliano chefitaliano;
    chefitaliano.Marabilha();


    system("pause");
    return 0;
}