#include <iostream>
using namespace std;

class array
{
    int a[10];

public:
    void insert(int index, int value)
    {
        a[index] = value;
    }
};

class stack : private array
{
    int top = -1;

public:
    void push(int value)
    {
        insert(top++, value);
    }
};

int main()
{
    stack s1;
    s1.push(1);
    return 0;
}