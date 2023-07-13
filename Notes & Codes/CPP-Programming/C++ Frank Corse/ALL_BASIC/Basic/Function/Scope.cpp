#include<iostream>
using namespace std;
int main()
{
    int num{10};
    int num1{200};
    {
        int num{20};
        cout<<"Inner scope----------------------------"<<endl;
        cout<<"num is "<<num<<endl;
        cout<<"Num is "<<num1<<endl;
        int num3{400};
        cout<<"num3 is "<<num3<<endl;
        cout<<"Inner scope----------------------------"<<endl;
    {
        {
            int num=90;
            num1=300;
            cout<<num<<endl;
        }
    }
    }
        cout<<"Outer scope----------------------------"<<endl;

    cout<<"num is "<<num<<endl;
    cout<<"num1 is "<<num1<<endl;


}