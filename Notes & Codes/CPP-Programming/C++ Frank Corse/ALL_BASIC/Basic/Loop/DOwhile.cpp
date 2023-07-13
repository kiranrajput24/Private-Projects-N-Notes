#include <iostream>
using namespace std;

int main()
{
    int num;
    bool done{false};
    // do
    // {
    //     cout << "Enter number  1 to 100 :";
    //     cin >> num;
    // } while (num > 100 || num < 1);

    while (!done)
    {
        cout << "Enter the number between 1 to 100 :";
        cin >> num;
        if (num <= 1 || num >= 100)
        {
            cout << "Out of range, try again" << endl;
        }
        else
        {
            cout << "Thanks !" << endl;
            done = true;
        }
    }
}