#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void fun(int b)
{
    cout<<"a :"<<b;
}

int main()
{
    int b=10;
    int *a=&b;
    fun(*a);
    return 0;
}