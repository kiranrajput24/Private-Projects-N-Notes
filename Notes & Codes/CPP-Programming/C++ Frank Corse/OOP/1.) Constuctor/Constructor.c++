#include<iostream>
using namespace std;

class Student
{
    public :
   
    int id;
    string name;

    Student(int i,string n):id{i},name{n}
    {
    }

    void get_details()
    {
        cout<<"\nStudent ID :"<<id;
        cout<<"\nStudent Name :"<< name;
    }

};

// int main()
// {
//     // Student s;
//     //    Provide error because we create parameterize 
//     // constructor  compiler does't generate no args  constructor


//     Student s1(2,"Kiran");
//     s1.get_details();

// }