#include<iostream>
using namespace std;

class Student
{
    public :
    int id;
    string name;
    Student(int i,string n)
    {
        id=i;
        name=n;
    }
    void put_details(int i,string n)
    {
        id=i;
        name=n;
    }
    void get_details()
    {
        cout<<"\nName :"<<name;
        cout<<"\nId :"<<id;
    }

};

int main()
{
    Student s1(1,"kiran");
    int sid;
    // string sname;
    // cout<<"Enter student id :";
    // cin>>sid;
    // cout<<"Enter Student name :";
    // cin>>sname;
    // s1.put_details(sid,sname);
    s1.get_details();
}