#include <iostream>
using namespace std;
#include <vector>
#include <iomanip>

int main()
{
    char selection;
    int value{}, smallest{}, largest{};
    double total{};
    cout << setprecision(4);
    vector<int> list{};
    do
    {
        start :
        cout << endl
             << endl
             << "P-Print Numbers " << endl;
        cout << "A-Add a Number " << endl;
        cout << "M-Display mean of number" << endl;
        cout << "S-Display smallest number" << endl;
        cout << "L-Display Largest number" << endl;
        cout << "Q-Quit" << endl;
        cout << "\nEnter Your Choice :";
        cin >> selection;

        if (selection == 'p' || selection == 'P')
        {
            if (list.size() == 0)
            {
                cout << "[] list is empty";
            }
            else
            {
                cout << "[ ";
                for (auto val : list)
                {
                    cout << val << " ";
                }
                cout << "]" << endl;
            }
        }
        else if (selection == 'a' || selection == 'A')
        {
            cout << "Enter value : ";
            cin >> value;
            for (int val : list)
            {
                if (val == value)
                {
                    cout << "\nNot allowed Duplicate value " << endl;
                    goto start;
                }
            }
            list.push_back(value);
        }
        else if (selection == 'm' || selection == 'M')
        {
            if (list.size() == 0)
            {
                cout << "[] list is empty" << endl;
            }
            else
            {
                for (auto val : list)
                {
                    total += val;
                }
                cout << "Mean of the List is " << total / list.size() << endl;
            }
        }
        else if (selection == 's' || selection == 'S')
        {
            if (list.size() == 0)
                cout << "[] list is empty";
            else
            {
                for (auto val : list)
                {
                    if (val < smallest)
                        smallest = val;
                }
                cout << "Smallest Value is " << smallest << endl;
            }
        }
        else if (selection == 'l' || selection == 'L')
        {
            if (list.size() == 0)
                cout << "[] list is empty";
            else
            {
                for (auto val : list)
                {
                    if (val > largest)
                        largest = val;
                }
                cout << "Largest Value of the list is " << largest << endl;
            }
        }
        else if (selection == 'q' || selection == 'Q')
        {
            list.clear();
            cout << "GoodBye ! " << endl;
        }
        else
            cout << "Unknown selection, please try again" << endl;
    } while (selection != 'q' && selection != 'Q');
}