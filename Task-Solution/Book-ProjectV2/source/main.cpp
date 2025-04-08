#include<bits/stdc++.h>
using namespace std;
#include "Book.h"

/*
use 1 or 0 as answers while the code is running.
used functions :
addBook
deleteBook
searchById
available book in the library
display all books
*/
void searchById(int id, vector<Book> &books);
void DelBook(vector<Book> &books,int bookid);
void availableBooks(vector<Book> &books);
void AddBook(vector<Book> &books);

int main()
{
    int n=2;
    vector<Book> books(n);
    books[1]=Book(99,2024,123.4,"khaled","ASongOfIceAndFire",true);

    cout<<"your existing books in the library are: "<<endl;
    for(int i=0;i<books.size();i++)
    {
        cout<<"the details of the book no."<< i+1<< " is: "<<endl;
        books[i].display();
    }



    bool Add;
    cout<<"Do you want to add a book? (if \"yes\" enter \"1\")";cin>>Add;
    while (Add) {
        n++;
        AddBook(books);
        cout<<"Do you want to add another book? ";cin>>Add;
    }

    bool search;
    cout<<"Do you want to search for a particular book via id? ";cin>>search;
    while (search) {
        cout<<"Enter book id: ";
        int id;cin>>id;
        searchById(id,books);
        cout<<"do you want to search for another book? ";cin>>search;
    }

    bool Del;
    cout<<"Do you want to Delete a Book? (if \"yes\" enter \"1\" then the id of the book you want to delete) ";cin>>Del;
    while (Del) {
        cout<<"Enter book's id: ";
        int id;cin>>id;
        DelBook(books,id);
        cout<<"do you want to delete another book? ";cin>>Del;
    }

    availableBooks(books);

    for(int i=0;i<books.size();i++)
    {
        cout<<"the details of the book no."<< i+1<< " is: "<<endl;
        books[i].display();
    }

    return 0;
}

void searchById(int id, vector<Book> &books)
{
    bool found = false;
    for (int i=0;i<books.size();i++)
    {
        if (books[i].getId()==id)
        {
            cout << "Book found: "<<endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Book not found"<<endl;

}

void AddBook(vector<Book> &books)
{
    Book AddingBook[1];
    int Id,Year;
    double Price;
    string Author,Title;
    bool Available;
    cout<<"Enter book id: ";cin>>Id;
    cout<<"Enter book author: ";cin>>Author;
    cout<<"Enter book title: ";cin>>Title;
    cout<<"Enter book year: ";cin>>Year;
    cout<<"Enter book price: ";cin>>Price;
    cout<<"Enter the book availability: ";cin>>Available;

    AddingBook[0].setId(Id);
    AddingBook[0].setAuthor(Author);
    AddingBook[0].setTitle(Title);
    AddingBook[0].setYear(Year);
    AddingBook[0].setPrice(Price);
    AddingBook[0].setAvailable(Available);
    books.push_back(AddingBook[0]);
}

void availableBooks(vector<Book> &books)
{
    Book BookCounter;
    int counter=0;
    for(int i=0;i<books.size();i++) {
        if (books[i].getAvailable()==1) counter ++;
    }
    BookCounter.setCounter(counter);
    cout<<"the available books is: "<<counter<<endl;
    cout<<"the capacity of the library is: "<<books.size()<<endl;

}

void DelBook(vector<Book> &books,int bookid)
{
    Book bookId;int capacity;
    for(int i=0;i<books.size();i++) {
        if(bookid==books[i].getId())
        {
            books.erase(books.begin()+i);
            capacity=books.size();
            break;
        }
    }
}


