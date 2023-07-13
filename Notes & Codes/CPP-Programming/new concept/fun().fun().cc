#include <iostream>
using namespace std;
class A
{
public:
    A fun()
    {
        cout << "fun 1";
        A b;
        return b;
    }
    void fun2()
    {
        cout << "\nfun 2";
    }
};

int main()
{

    A a;
    a.fun().fun2();
    return 0;
}