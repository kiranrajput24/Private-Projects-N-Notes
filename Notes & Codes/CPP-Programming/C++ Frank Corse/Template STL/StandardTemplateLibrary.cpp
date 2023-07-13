#include <iostream>
using namespace std;


struct person
{
    string name;
    int age;
    bool operator>(person rhs)
    {
        return (this->age > rhs.age);
    }
};

template <typename T>
T fun(T a, T b)
{
    return ((a > b) ? a : b);
}

int main()
{
    person ram{"ram", 43};
    person shyam{"shyam", 34};
    person newMan = max<person>(ram, shyam);
    return 0;
}