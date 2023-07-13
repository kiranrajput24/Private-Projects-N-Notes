#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;
int main()
{
    int a = 10, b = -20, c = 30;
    cout << "Enter value of A B C" << endl;
    cin >> a >> b >> c;

    cout << "hex : " << hex << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl
         << endl;

    cout << oct;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl
         << endl;

    cout << showbase << uppercase << "==========Showingbase===========\n";
    cout << "hex : " << hex << endl;
    cout << uppercase;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl
         << endl;
    cout << "showpos" << showpos;
    cout << "dec :" << dec << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl
         << endl;

    //===================================function=========================

    cout.setf(ios::showpos);
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << std::resetiosflags(ios::showpos);
    cout << "c : " << c << endl
         << endl;
}
