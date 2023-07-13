#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout << " p address " << p << endl
         << endl;
    cout << " value at a " << a << endl
         << endl;
    void *pv;  // Void pointer can only  store address of any data or pointer 
    // It can't be change value which is pointed by void pointer
    pv = p;

    cout << " p address " << p << endl
         << endl;
    
}