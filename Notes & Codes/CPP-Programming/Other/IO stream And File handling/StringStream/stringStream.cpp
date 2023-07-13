#include <iostream>
#include <iomanip>
#include <string>
#include<limits>
#include <sstream>
using namespace std;
int main()
{

    int value;
    string input;
    bool done = false;
    do
    {
        cout << "Enter integer value only : ";
        cin >> input;
        istringstream iss{input};
        if ((iss >> value))
        {

            cout << "Entered integer is : " << value << endl;
            done = true;
        }
        cout << "Please enter only integer value :";
        // cin.ignore(numeric_limits<streamsize>::max(),"\n");

    } while (!done);

    /*  int num;
         float fnum;
         string name;
         string set{"kiran 123 12.4"};
         istringstream iss{set}; // iss [obj of istringstream ] like a file
         iss >> name >> num >> fnum;
         // cout<<name<<" "<<num<<" "<<fnum;

         ostringstream oss; // oss [obj of ostringstream ] like a file
         oss << name << fnum << num << endl;
         oss << setw(10) << left << name << setw(7) << fnum << setw(7) << num;
         cout << oss.str();
      */

    return 0;
}
