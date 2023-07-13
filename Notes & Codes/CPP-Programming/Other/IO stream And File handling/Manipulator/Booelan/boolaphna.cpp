#include <iostream>
using namespace std;
int main()
{
    cout << boolalpha;
    cout << (10 == 10) << endl;
    cout << (10 == 20) << endl;

    cout << noboolalpha;
    cout << (10 == 10) << endl;
    cout << (10 == 20) << endl;

    cout.setf(ios::boolalpha);
    cout << (10 == 10) << endl;
    cout << (10 == 20) << endl;

    cout << (10 == 10) << endl;
    cout << (10 == 20) << endl;
}
