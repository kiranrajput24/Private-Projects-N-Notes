#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
    ifstream iof("test.txt"); // iof.open("test.txt");
    string str, line;
    int integer;
    double doub;
    char c;

    while (!iof.eof())
    {
        iof >> str >> integer >> doub;
        cout << setw(10) << left << str << setw(10)
             << integer << setw(10)
             << setprecision(2) << fixed << doub << endl;
    }
    // getline(iof,line);
    // cout<<line;

    // while(!iof.eof())
    // {
    //     getline(iof,str);
    //     cout<<str;
    // }

    // while (getline(iof, str))

    // {
    //     cout << str;
    // }

    // while (iof.get(c))
    //     cout << c;

    iof.close();
}