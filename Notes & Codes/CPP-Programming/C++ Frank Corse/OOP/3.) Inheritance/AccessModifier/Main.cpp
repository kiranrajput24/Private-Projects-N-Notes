#include <iostream>
using namespace std;
class Base
{

protected:
    int b;

private:
    int c;

public:
    int a;
    Base() : a{1}, b{2}, c{3}
    {
        cout << "\nBase class Data members \n:: a " << a << " b: " << b << " c: " << c << endl;
    }
};
// private data can't be accessible in derived class
class Derived : private Base // Except private data all data inherited as private member of derived class
{
   
public:
    Derived()
    {
        a=5; 
        b=6;
        cout << "\nBase class Data members \n:: a: " << a << " b: " << b << endl;
        
    }
    
};

int main()
{
    Base base;
    cout<<"\n----------------------\n";
    Derived derived;
    // derived.a=10; error if derived class inheritance type is private
    return 0;
}