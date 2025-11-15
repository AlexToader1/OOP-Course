#include <iostream>
using namespace std;

class Book
{
    private:
        string title;
        string author;
    
    public:

        friend class Library;
        virtual void displayInfo()
        {
            cout << "This is a classic book." << endl;
        }   

        Book(string t, string a) : title(t), author(a) {}
};

class Library
{
    public:
        void showBookInfo(Book book)
        {
            cout << "Book Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
        }
};

int main()
{
    Book book("Pride and Prejudice", "Jane Austen");
    Library book2;

    book2.showBookInfo(book);


    return 0;
}