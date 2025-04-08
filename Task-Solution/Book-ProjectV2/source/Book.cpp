#include<bits/stdc++.h>
#include "Book.h"
using namespace std;

int Book::capacity=0;
int Book::counter=0;

void Book::setAuthor(string a) {author=a;}
void Book::setTitle(string t) {title=t;}
void Book::setId(int i) {id=i;}
void Book::setAvailable(bool b) {available=b;}
void Book::setPrice(double p) {price =p;}
void Book::setYear(int y) {year=y;}
void Book::setCounter(int c) {counter=c;}
void Book::setCapacity(int c) {capacity=c;}

int Book::getId() {return id;}
string Book::getAuthor() {return author;}
string Book::getTitle() {return title;}
bool Book::getAvailable() {return available;}
double Book::getPrice() {return price;}
int Book::getYear() {return year;}
int Book::getCounter() {return counter;}
int Book::getCapacity() {return capacity;}

Book::Book()
{
    id=55;
    year=2023;
    price=510.0;
    author="Unknown";
    title="Unknown";
    available=true;
}
Book::Book(int id,int year,double price,string author,string title,bool available)
{
    setId(id);
    setYear(year);
    setPrice(price);
    setAuthor(author);
    setTitle(title);
    setAvailable(available);
}
Book::Book(int id)
{
}

Book::~Book()
{
    cout<<"Your command hes been executed."<<endl;

}


void Book::display()
{
    cout<<"id: "<<id<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Title: "<<title<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"Available?: ";
    if(available) cout<<"YES\n";
    else cout<<"NO\n";
    cout<<"Price: "<<price<<"L.E"<<endl;
}



