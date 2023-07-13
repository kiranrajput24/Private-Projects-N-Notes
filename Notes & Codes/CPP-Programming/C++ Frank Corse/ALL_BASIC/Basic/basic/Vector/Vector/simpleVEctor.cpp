#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> no{1,2,3,4,5}; 
    // cout<<"Enter 5 Number :\n";
    // cin>>no[0]>>no.at(1)>>no.at(2)>>no.at(3)>>no.at(4); // no[] also right like array  |||  no.at() like vector is also roght
    // cout<<"Elements are :\n";
    cout<<no.at(0)<<endl<<no.at(1)<<endl<<no.at(2)<<endl<<no.at(3)<<endl<<no.at(4)<<endl;

    cout<<"Vector Size are "<<no.size()<<endl;
    int no1 {0};
    cout<<"\nEnter one elements to add in vector :";
    cin>>no1;
    no.push_back(no1);
    cout<<"\nEnter one more elemets to Vector :";
    cin>>no1;
    no.push_back(no1);
    cout<<"Elments are : \n";
    cout<<no.at(0)<<endl<<no.at(1)<<endl<<no.at(2)<<endl<<no.at(3)<<endl<<no.at(4)<<endl<<no[5]<<endl<<no.at(6)<<endl;
    cout<<"\nSize of Vector are "<<no.size()<<"\n";
    
    cout<<"This should cause an exception \n"<<no.at(10);
}