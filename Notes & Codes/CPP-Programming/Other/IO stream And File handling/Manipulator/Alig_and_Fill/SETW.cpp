#include <iostream>
#include <iomanip>
using namespace std;
void ruler()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << j;
        }
    }
    cout << endl;
}
int main()
{
    double num1 = 123490, num2 = 567890;
    string hello = {"hello"}, how = {"how r u"};

    cout << endl
         << endl
         << "============default==============" << endl;
    ruler();
    cout << num1 << num2 << hello << how;

    cout << endl
         << endl
         << "============setw(10) by default right assign ==============" << endl;
    ruler();
    cout << setw(10) << num1 << setw(10) << num2 << setw(10) << hello << setw(10) << how;

    cout << endl
         << endl
         << "============setw(10) with left justified ==============" << endl;
    ruler();
    cout<<left<<setfill('-')<< setw(10) << num1 << setw(10) << num2 << setw(10) << hello << setw(10) << how;
    
    cout << endl
         << endl
         << "============setw(10) with blank space fill==============" << endl;
    ruler();
    cout<<setw(10) << num1 << setw(10) << num2 << setw(10) << hello << setw(10) << how;
}