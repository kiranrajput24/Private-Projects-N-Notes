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
    cout<<"structure size "<<sizeof(a)<<endl;
    cout<<"pointer size "<<sizeof(p)<<endl;
} 


// structure size 64
// pointer size 8
// why pointer size always 8 byte;