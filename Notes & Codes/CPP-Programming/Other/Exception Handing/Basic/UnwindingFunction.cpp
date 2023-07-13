#include <iostream>
using namespace std;
void fun3()
{
    cout << "\nstart fun3";
    throw 100;
    cout << "\nend fun3";
}
void fun2()
{
    cout << "\nstart fun2";
    try
    {
        fun3();
    }
    catch (...)
    {
        cerr << "\nError catch in fun2 " << endl;
    }
    cout << "\nend fun2";
}
void fun1()
{
    cout << "\nstart fun1";
    fun2();
    cout << "\nend fun1";
}

int main()
{
    cout << "\nStarting Main";
    try
    {
        fun1();
    }
    catch (int &ex)
    {
        cerr << "\nerror : " << ex << endl;
    }

    cout << "\nEnding Main";
    return 0;
}