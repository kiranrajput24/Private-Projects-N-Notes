#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> list;
    int num;
    string str;
    cout<<"Enter numbers elements in list :";
    cin>>num;
    for(int i{0};i<num;i++)
    {
        cout<<"Enter name : ";
        cin>>str;
        list.push_back(str);
    }
    for(const auto &name:list)
    {
        if(name[0]=='B'||name[0]=='C' || name[0]=='b'||name[0]=='c')
        cout<<name<<endl;
    }
    return 0;
}