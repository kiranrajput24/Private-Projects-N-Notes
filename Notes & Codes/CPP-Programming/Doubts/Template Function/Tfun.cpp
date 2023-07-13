#include <iostream>
#include <iomanip>
using namespace std;
template <typename T>
T fun(const T &a, const T &b)
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
void swap(T1 &a, T1 &b)
{
    T1 temp;
    temp = a;
    a = b;   
    b = temp;
}

struct person
{
    string name;
    int age;
    bool operator>(const person &rhs) const
    {
        return this->age > rhs.age;
    }
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
    // person newMan = max<person>(ram, shyam);
    cout << max<int>(12, 23) << endl;
    cout << max<double>(12, 3) << endl;
    cout << ram;
    cout << max(12.76, 23.87) << endl;
    cout << max('a', 'A');

    print<float>(12.76, 23.87);
    print<person>(ram, shyam);
    print(54, shyam);
    print(ram, 543.4);

    // swap(ram,shyam);
    int a = 10, b = 20;
    swap(a, b);
    cout << ram;
    return 0;
}