#include <iostream>
#include <string.h>
using namespace std;
class Book
{
private:
    char name1[5];
    char name2[5];

    /* data */
public:
    float price;
    int stock;

    // void set( char &a,  char &b)  why not run ... pass by reference in c++   array as aslo not working
    void set( char *a,  char *b)
    {
    strcpy(name1,a);
    strcpy(name2,b);
    }

    void get(){
        cout<<"Name :"<<name1<<endl<<"Name :"<<name2<<endl;
    }
};


int  main()
{
    Book b1, b2;
    b1.price = 100;
    b1.stock = 10;
    char x[5]="Ramu",y[5]="Aman";
    b1.set(x,y);
    // b1.set("ramu", "aman");   char can't dirct pass in fun.... string can be pass directy

    b1.get();
    return 0;
}

