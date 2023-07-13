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
    Base()
        cout << "\nBase class default construtor Called" << endl;
    {
    }

    Base(int a, int b, int c)
    {
        this->a = {a};
        this->b = {b};
        this->c = {c};
        cout << "\nBase class parameterize construtor";
        cout << "\n:: a : " << a << " b : " << b << " c: " << c << endl;
    }
    Base(const Base &rhs) : a{rhs.a}, b{rhs.b}, c{rhs.c}
    {

        cout << "\n Base Copy construtor call\n";
    }
    Base &operator=(const Base &rhs)
    {
        cout<<"\nBase assignment operator called \n";
        if (this != &rhs)
        {
            a = {rhs.a};
            b = {rhs.b};
            c = {rhs.c};
            return *this;
        }
        return *this;
    }
    ~Base()
    {
        cout << "\nBase destrutor called \n";
    }
};
class Derived : public Base
{
    int DoubleA, DoubleB, DoubleC;
    //  using Base::Base;
public:
    Derived() : Base()
    {

        cout << "\n Dervied [Default construtor Called]" << endl;
    }

    Derived(int Doublea, int Doubleb, int Doublec)
        : Base(Doublea, Doubleb, Doublec),
          DoubleA{Doublea * 2}, DoubleB{Doubleb * 2}, DoubleC{Doublec * 2}

    {

        cout << "\nDerived class Data members [parameterize construtor] \n:: DoubleA: " << DoubleA << " DoubleB :" << DoubleB << " DoubleC :" << DoubleC << endl;
    }
    Derived(const Derived &other)
        : Base(other), DoubleA{other.DoubleA},
          DoubleB{other.DoubleB}, DoubleC{other.DoubleC}
    {

        cout << "\nDerived Copy construtor call\n";
    }
    Derived &operator=(const Derived &other)
    {
        if (this == &other)
            return *this;
        Base::operator=(other);
        DoubleA = {other.DoubleA};
        DoubleB = {other.DoubleB};
        DoubleC = {other.DoubleC};
        return *this;
    }
    ~Derived()
    {
        cout << "\nderived destrutor called \n";
    }
};

int main()
{
//     Base base(10,20,30);
//     Base base1(base);
//     base=base1;
    cout << "\n----------------------\n";
    Derived derived(4, 5, 6);
    Derived derived1(derived);
    derived=derived1;
    return 0;
}