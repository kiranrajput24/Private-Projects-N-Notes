#include<iostream>
using namespace std;

int main()
{
    // int *ptr_to_Int;
    // ptr_to_Int=new int(10); 
    // cout<<*ptr_to_Int;


    int *array_ptr=new int[5];
    // delete array_ptr;
    cout<<"\nEnter array value :";
    for(int i{0};i<5;i++)
    cin>>*(array_ptr+i);

    for(int i{0};i<5;i++)
    cout<<*(array_ptr+i)<<" ";
}