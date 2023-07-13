#include<iostream>
using namespace std;

// if we pass any parameter then it take them and return Result
//  when we do not pass any argument then it takes defalt value perform operation and give back Outpput 
double calc(double value=100,double tax=0.08) 
{
    return value*tax;
}

int main()
{
    cout<<"calculate Cost "<<calc(200,0.06)<<endl;
    cout<<"Calculate cost "<<calc(200)<<endl;
    cout<<"Calculate cost "<<calc(200,9)<<endl;
    cout<<"Calculate cost "<<calc()<<endl;
}