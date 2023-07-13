#include <iostream>
#define N 10
using namespace std;
class Student
{
    char name[30];
    int roll_no;
    int Class;
    float marks;

public:
    void set()
    {
        cout << "Student name : ";
        cin >> name;

        cout << "Student roll_no: ";
        cin >> roll_no;

        cout << "Student mraks: ";
        cin >> marks;

        cout << "Student  Class: ";
        cin >> Class;
        cout << endl
             << endl;
    }

    void get()
    {
        cout << "Name : " << name << endl
             << "Roll_no : " << roll_no << endl
             << "Class : " << Class << endl
             << "Marks : " << marks << endl
             << endl;
    }
};

int main()
{
    Student student[N];

    cout << "Enter Students Details :" << endl
         << endl;

    for (int i = 0; i < N; i++)
    {
        student[i].set();
    }

    cout << "Student Details " << endl <<endl;

    for (int i = 0; i < N; i++)
    {
        student[i].get();
    }
}