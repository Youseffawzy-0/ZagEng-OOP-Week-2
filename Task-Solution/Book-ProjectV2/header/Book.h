#include<iostream>
using namespace std;
class Book
{
private:
    int id,year;
    double price;
    string author,title;
    bool available;
    static int counter,capacity;
public:
    //setters
    void setId(int i);
    void setYear(int y);
    void setPrice(double p);
    void setAuthor(string a);
    void setTitle(string t);
    void setAvailable(bool b);
    void setCounter(int c);
    void setCapacity(int c);

    //getters
    int getId();
    int getYear();
    double getPrice();
    string getAuthor();
    string getTitle();
    bool getAvailable();
    int getCounter();
    int getCapacity();



    //constructor
    Book();
    Book(int id);
    Book(int id,int year,double price,string author,string title,bool available);

    //destructor
    ~Book();


    //display
    void display();

};

