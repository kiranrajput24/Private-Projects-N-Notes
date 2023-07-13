#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int size,x,value;
    cout<<"Enter Size of Array  of  vector :"<<endl;
    cin>>size;
    vector<int> v[size];


    for(int i{};i<size;++i)
    {
        cout<<"\nIn "<<i<<" Vector how many elements you want  to insert : "<<endl;
        cin>>x;
        for(int j{}; j<x;j++)
        {
            cout<<"Enter value for "<<i<<" vector "<<endl;
            cin>>value;
            v[i].push_back(value);
        }
    }


    
    for(int i{};i<size;++i)
    {
        cout<<i<<" Vector elements\n [ ";
        for(int j{}; j<v[i].size();j++)
        {
            cout<<v[i][j];
        }
        cout<<" ]"<<endl;
    }
    return 0;
}