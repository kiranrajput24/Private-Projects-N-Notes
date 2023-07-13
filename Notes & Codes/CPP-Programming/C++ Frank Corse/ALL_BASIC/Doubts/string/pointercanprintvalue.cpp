#include <iostream>
using namespace std;
int main()
{
    char *CHAR;
    int *INT;
    CHAR = new char[20];
    cout << "Enter value : ";
    cin >> CHAR;
    cout << "Str :" << CHAR << endl;

    cout << "Enter value : ";
    cin >> INT;
    cout << "Str :" << INT << endl;
}