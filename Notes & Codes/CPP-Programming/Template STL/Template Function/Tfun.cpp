#include <iostream>
#include <iomanip>
using namespace std;
template <typename T>
T Max(const T &a, const T &b)
{
    return ((a > b) ? a : b);
}

template <typename T1, class T2>

void print(T1 a, T2 b)
{
    cout << endl
         << endl
         << setw(5) << a << setw(5) << b << endl;
}

template <typename T1>
void Swap(T1 &a, T1 &b)
{
    T1 temp;
    temp = a;
    a = b;
    b = temp;
}

struct person
{

    bool operator>(const person &rhs) const
    {
        // return this->age > rhs.age; // we can campare as we want
        return this->name > rhs.name;
    }
    person(string Name = "Unknown", int Age = 0) : name{Name}, age{Age} {};

    // private:
    // friend ostream &operator<<(ostream &out, const person &obj);

    /* In struct everything by default public no need
      to make friend fun for insertion operator */
    string name;
    int age;
};

ostream &operator<<(ostream &out, const person &obj)
{
    cout << "name :" << setw(5) << obj.name << endl
         << "age  :" << setw(5) << obj.age << endl;
    return out;
}

int main()
{
    person ram{"ram", 43};
    person shyam{"shyam", 34};
    print<person>(ram, shyam);
    Swap(ram, shyam);
    print<person>(ram, shyam);
    cout << Max(ram, shyam);
    Z

    // cout << Max<int>(12, 23) << endl;
    // cout << Max<double>(12, 3) << endl;
    // cout << Max(12.76, 23.87) << endl;
    // cout << Max('a', 'A');
    // print("A", "B");
    // print(2324, "B");
    // int a = 10, b = 20;
    // print(a, b);
    // Swap(a, b);
    // print(a, b);
    return 0;
}