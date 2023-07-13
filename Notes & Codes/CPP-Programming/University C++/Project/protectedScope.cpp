#include <iostream>
using namespace std;
class A
{

protected:
    int a = 10, b = 20;

public:
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
int main()
{
    B b;
    cout << "\nAccess proctected memeber by member function\n";
    b.set(10, 30);
    b.get();
    // b.a;  // through object can't be access proctected data member. it accessible in that class where it declared or inherited class.. 
    return 0;
}