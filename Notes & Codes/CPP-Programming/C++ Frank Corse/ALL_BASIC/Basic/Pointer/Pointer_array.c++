#include<iostream>
using namespace std;

int main()
{
    int scores[] {1,2,3,4,5};
    cout<<"array\n";
    cout<<scores<<endl;
    cout<<*scores<<endl;


    int *ptr{scores};
    int *ptr1{scores};
    ptr1+=3;
    cout<<"pointer";
    cout<<endl<<ptr<<endl;
    cout<<*ptr<<endl;

    cout<<"\n\n Array using  Offset\n\n";
    cout<<*(scores+1)<<endl;
    cout<<*(scores+2)<<endl;

    cout<<"\nPointer using Subscript \n\n";
    cout<<ptr[1]<<endl;
    cout<<ptr[2]<<endl;

    int n;
    cout<<"Differece between pointer block [here pointer should be point to be same variavle or data types  ] \n";
    n=ptr1-ptr;
    cout<<n;

    cout<<"Array stored in memory : /n";
    cout<<endl<<ptr+0<<endl;
    cout<<ptr+2<<endl;
    cout<<ptr+3<<endl;

   
















   

}