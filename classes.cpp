#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int n_pages;

        Book(){    //Livro por default
            title = "Sem titulo";
            author = "Sem autor definido";
            n_pages = 0;
        }

        Book(string aTitle, string aAuthor, int an_pages){  //Dados do livro
            title = aTitle;
            author = aAuthor;
            n_pages = an_pages;
        }
};


int main(){

    Book book1("Harry Potter", "J.K.Rowling", 250);
    Book book2 ("South Park", "Francisco Igloo", 230);
    Book book3;
    cout << book3.title << endl;
    


    system("pause");
    return 0;
}