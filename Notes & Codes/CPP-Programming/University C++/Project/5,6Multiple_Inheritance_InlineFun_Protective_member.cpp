#include <iostream>
using namespace std;
class A
{

protected:
    int a = 10, b = 20;

public:
    int c = 10, d;
    virtual void set(int, int) = 0;
    virtual void get() = 0;
};
class B : public A
{
public:
    void set(int A, int B) override
    {
        a = A;
        b = B;
    }

    void get() override
    {
        cout << "A : " << a << " B :" << b << endl;
    }
};

class C : protected A
{
public:
    void set(int C, int D) override
    {
        c = C;
        d = D;
    }

    void get() override
    {
        cout << "C : " << c << endl;
    }
};

int main()
{
    B b;
    cout << "\nAccess proctected memeber by member function\n";
    b.set(10, 30);
    b.get();
    // b.a;  // gives object can't access proctected data member

    C c;
    // cout<<c.d; // d inherited in proctected way it directly can't be accessible
    return 0;
}