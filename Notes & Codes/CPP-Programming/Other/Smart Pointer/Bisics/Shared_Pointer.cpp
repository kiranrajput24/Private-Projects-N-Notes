#include <iostream>
#include <memory>
#include <vector>
using namespace std;
int main()
{
    shared_ptr<int> a1 = make_shared<int>(100);
    cout << a1.use_count() << endl;
    shared_ptr<int> a2{a1};
    cout << a1.use_count() << endl;
    {
        shared_ptr<int> p3{a2};
        cout << p3.use_count() << endl;
        a2.reset();
        cout << p3.use_count() << endl;
    }
    cout << a1.use_count() << endl;



    
}