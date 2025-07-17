#include<iostream>
using namespace std;

class Book {
    public:
    string title;
    string author;
    int publicationYear;
    string ISBN;

    book()
    {   
        this-> title = this-> author = this -> ISBN = "0";
        publicationYear = 0;
    }

    book(string title ,string author ,int publicationYear ,string ISBN)
    {
        this ->title = title;
        this ->author = author;
        this ->publicationYear = publicationYear;
        this->ISBN = ISBN;
    }

    book(string title ,string author ,int publicationYear)
    {
        string ISBN = title[0] + author[0] + 10;
        this ->title = title;
        this ->author = author;
        this ->publicationYear = publicationYear;
        this->ISBN = ISBN;
    }

    string generateISBN(string title ,string author)
    {
        string ISBN = title[0] + author[0] + 10;
        return ISBN;
    }
};
int main(){
    
    return 0;
}