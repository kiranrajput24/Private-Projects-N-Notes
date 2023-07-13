#include<iostream>
using namespace std;

void print_array(int *array,int sentinel)
{
    // while(*array!=sentinel)
    for(int i=0;*(array+i)!=sentinel;i++)
    cout<<*(array+i)<<endl;
    
}
int main()
{
    int array[]{100,300,200,400,-1};
    print_array(array,-1);
}