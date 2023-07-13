#include <iostream>
#include <vector>
using namespace std;
void print_option()
{
    cout << "\nA for Add \nP for print list   \nG for Greatest value  in the list \nS for smallest value in the list \nMean of list\n\n";
    cout << "\n\nEnter Your Choice : " << endl;
}
char get_selction()
{
    char selection;
    cin >> selection;
    return toupper(selection);
}

bool IsEmpty(vector<int> &list)
{
    if (list.size() == 0)
    {
        return 1;
    }
    else
        return 0;
}
int add_in_list(vector<int> &list)
{
    int value;
    cout << "\nEnter integer value to add in list \n";
    cin >> value;

    for (int val : list)
    {
        if (val == value)
            cout << "Duplicate value not allowed     \nPlaease try again\n";
        return 0;
    }

    list.push_back(value);
    cout << "Value added\n";
}
void print_list(vector<int> &list)
{
    if (IsEmpty(list))
        cout << "\n[ ] list is empty\n";

    else
    {
        cout << "\nList elements : \n \n[ ";
        for (int val : list)
            cout << val << " ";
        cout << "]\n";
    }
}
void Mean_of_list(vector<int> &list)
{
    double total{};
    if (IsEmpty(list))
        cout << "\n[] list is empty\n";
    else
    {
        for (int val : list)
            total += val;
    }
    cout << "\nMean of the list is : " << total / list.size() << endl;
}
void smallest_value(vector<int> &list)
{
    int smallest_value{list[0]};
    if (IsEmpty(list))
        cout << "\n[] list is empty \n";
    else
    {
        for (int val : list)
        {
            if (smallest_value > val)
                smallest_value = val;
        }
        cout << "\nsmallest value is :" << smallest_value << endl;
    }
}
void greatest_value(vector<int> &list)
{
    int greatest_value{list[0]};
    if (IsEmpty(list))
        cout << "[] list is empty ";
    else
    {
        for (int val : list)
        {
            if (greatest_value < val)
                greatest_value = val;
        }
        cout << "greatest value is :" << greatest_value << endl;
    }
}

void call_Operation(vector<int> &list)
{
    char sel;
    do
    {
        print_option();
        sel = get_selction();
        switch (sel)
        {
        case 'A':
            add_in_list(list);
            break;

        case 'P':
            print_list(list);
            break;

        case 'M':
            Mean_of_list(list);
            break;

        case 'S':
            smallest_value(list);
            break;

        case 'G':
            greatest_value(list);
            break;

        case 'Q':
            cout << "Good bye";
            break;
        default:
            cout << "Oops Entered invalid choice \nPlease try again :";
        }
    } while (sel != 'q' && sel != 'Q');
}

int main()
{
    vector<int> list{};
    call_Operation(list);
    return 0;
}