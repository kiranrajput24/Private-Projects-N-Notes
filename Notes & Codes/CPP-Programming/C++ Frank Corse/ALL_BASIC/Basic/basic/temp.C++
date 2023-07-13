#include<iostream>
using namespace std;

void  fun(int &b)
{
    b=5;
} 

int main()
{
// int a (20); 
// int a {20};
int a=20;
// fun(a);
cout<<a;
return 0;
}