#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{

string key1,key2;
   
   cout<<"Enter key : "<<endl;
    getline(cin, key1);
    cin.ignore();
    getline(cin, key2);
    cout<<"Key1 :"<<key1<<" Key2 :"<<key2<<endl;
    return 0;
}