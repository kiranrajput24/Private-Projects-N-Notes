
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
    {
        cout << "\nBAse class default construtor Called" << endl;
    }

    Base(int a, int b, int c)
    {
        this->a = {a};
        this->b = {b};
        this->c = {c};
        cout << "\nBase class parameterize construtor \n:: a : " << a << " b : " << b << " c: " << c << endl;
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
    ~Derived()
    {
        cout << "\nderived destrutor called \n";
    }
};

int main()
{
    Base base;
    cout << "\n----------------------\n";
    Derived derived(4, 5, 6);
    return 0;
}

/* ---------------------below have construtor problem------------------- */

// #include <iostream>
// using namespace std;
// class Base
// {

// protected:
//     int b;

// private:
//     int c;

// public:
//     int a;
//     Base() : a{1}, b{2}, c{3}
//     {
//         cout << "\nBase class default construtor \n:: a :" << a << " b: " << b << " c: " << c << endl;
//     }

//     Base(int a, int b, int c)
//     {
//         this->a = {a};
//         this->b = {b};
//         this->c = {c};
//         cout << "\nBase class parameterize construtor \n:: a :" << a << " b : " << b << " c: " << c << endl;
//     }
//     ~Base()
//     {
//         cout << "Base destrutor called \n";
//     }
// };
// class Derived : public Base
// {
//     int d, e, f;
//     //  using Base::Base;
// public:
//     Derived()
//     {

//         cout << "\nDerived class Data members [Default construtor] \n:: d: " << d << " e :" << e << " f :" << f << endl;
//     }

//     Derived(int d, int e, int f)

//     {

//         cout << "\nDerived class Data members [parameterize construtor] \n:: d:" << d << " e :" << e << " f :" << f << endl;
//     }
//     ~Derived()
//     {
//         cout << "derived destrutor called \n";
//     }
// };

// int main()
// {
//     Base base;
//     cout << "\n----------------------\n";
//     Derived derived(4, 5, 6);
//     // derived.a=10; error if derived class inheritance type is private
//     return 0;
// }