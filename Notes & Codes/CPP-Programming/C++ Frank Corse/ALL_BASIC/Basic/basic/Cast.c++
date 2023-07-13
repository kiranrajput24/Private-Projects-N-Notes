#include<iostream>
using namespace std;
int main()
{
    int num1 {},num2{},num3{},total;
    // cout<<num1<<endl<<num2<<endl<<num3<<endl;
    cout<<"Enter the three values : \n";
    cin>>num1>>num2>>num3;
    total=num1+num2+num3;
    cout<<"Total :"<<total<<endl;
    double average;
    average=static_cast<float>(total)/3;
    cout<<"Average of three number : "<<average<<endl;


    // static_cast<double>
}