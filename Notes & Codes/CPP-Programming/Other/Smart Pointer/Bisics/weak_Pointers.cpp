#include <iostream>
#include <memory>
using namespace std;
class b;
class a
{
    shared_ptr<b> bptr;

public:
    a()
    {
        cout << "\ndefault a constructor called";
    }
    void set_bptr(shared_ptr<b> &b)
    {
        bptr = b;
    }
    ~a()
    {
        cout << "\nDestructor of a is called";
    }
};

class b
{
    // shared_ptr<a> aptr; // memory leak
    weak_ptr<a> aptr; // use this 

public:
    b()
    {
        cout << " \ndefault b constructor called";
    }
    void set_aptr(shared_ptr<a> &a)
    {
        aptr = a;
    }
    ~b()
    {
        cout << "\nDestructor of b is called";
    }
};
int main()
{
    shared_ptr<a> A = make_shared<a>();
    shared_ptr<b> B = make_shared<b>();
    A->set_bptr(B);
    B->set_aptr(A);
    return 0;
}