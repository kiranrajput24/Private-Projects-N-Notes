#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6};
    
    vector<int> :: iterator iter;
     iter=v.begin();
     cout<<"v[0] "<<*iter<<endl;

     cout<<"v[3] "<<*(++iter)<<endl;

     iter=v.end()-1;
     cout<<"last element "<<*iter<<endl;


     for(iter=v.begin();iter!=v.end(); iter++)
     {
         cout<<*iter<<" ";
     }
     return 0;
}