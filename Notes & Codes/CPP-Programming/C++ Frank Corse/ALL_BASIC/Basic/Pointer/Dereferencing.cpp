#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> stooges {"Lary","mary","curly"};
    vector<string> *vector_ptr{nullptr};
     vector_ptr=&stooges;
    //  cout<<(*vector_ptr).at(0);

     for( auto v:*vector_ptr)
     {
         cout<<v<<" ";
     }
}