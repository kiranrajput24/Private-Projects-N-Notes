// #include <iostream>
// using namespace std;

// class objcount
// {
//     int data;
// public:
//     static int count;
//     objcount(int d = 0)
//     {
//         cout << "\nConstructor called";
//         count++;
//     }

//     static void printObjcount()
//     {
//         cout << "\ncount : " << count << endl;
//     }
// };

// int objcount::count;
// int main()
// {
//     objcount a, b, c, d, e;
//     a.count = 200;
//     b.printObjcount();
//     return 0;
// }

#include <iostream>
using namespace std;

class objcount
{
    int data;

public:
    static int count;
    objcount(int d = 0)
    {
        cout << "\nConstructor called";
        count++;
    }
    ~objcount()
    {
        count--;
    }
    void set()
    {
        cout << "\nEnter the data value :";
        cin >> data;
    }
    void get()
    {
        cout << "\n Enter data value is " << data;
    }

    static void printObjcount()
    {
        cout << "\ncount : " << count << endl;
    }

    // ------------------------------------------------------------//
    void callstaticfun()
    {
        printObjcount();
    }

    void change_static_data_member(int data_val)
    {
        count = data_val;
    }
};
int objcount::count;
// int objcount::count=10; we can also do this

int main()
{
    objcount a, b, c, d, e;
    {
        a.count = 200;
        objcount x, y, z;

        b.printObjcount();
    }
    b.printObjcount();

    // e.change_static_data_member(100);
    // objcount::printObjcount();
    // a.callstaticfun();
    return 0;
}