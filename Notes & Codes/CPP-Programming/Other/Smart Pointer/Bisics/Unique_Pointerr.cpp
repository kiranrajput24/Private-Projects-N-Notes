#include <iostream>
#include <memory>
using namespace std;
class test
{
    int data;

public:
    test() { cout << " \ndefault Test constructor called"; }
    test(int d) : data{d}
    {
        cout << " \nParameterize Test constructor called";
    }
    ~test()
    {
        cout << "\nDestructor of test is called";
    }
};
int main()
{
    // test s(100);
    // test *s=new test(100);
    // delete s;

    unique_ptr<test> t{new test(100)};
    unique_ptr<test> s = make_unique<test>(100);
    unique_ptr<test> n;

    n=move(t);
    if(!t)
    cout<<"\n\nNullptr";


}