#include<iostream>
using namespace std;
struct m
{
    int mam;
    float n;
    double d;
    long int qi;
    long double ab;
    struct m *ptr;
}a,*p;


int main()
{
    cout<<sizeof(a)<<endl;
    cout<<sizeof(p)<<endl;
}