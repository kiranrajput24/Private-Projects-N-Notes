#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    char first_name[20]{"Kiran"};
    char last_name[20]{"Bohra"};
    char full_name[50]{};
    char temp[50]{};

    cout<<first_name;

    // cout<<"Enter Your first_name :";
    // cin>>first_name;

    // cout<<"Enter Your Last_name :";
    // cin>>last_name;

    // cout<<endl<<"______________________________________________________"<<endl;

    // cout<<"Hello "<<first_name<<" your name has "<<strlen(first_name)<<" characters"<<endl;
    // cout<<"and Your last name has "<<last_name<<' '<<strlen(last_name)<<" Characters";

    // strcpy(full_name,first_name);
    // strcat(full_name," ");
    // strcat(full_name,last_name);
    // cout<<"\n\nYour full name is "<<full_name<<endl;

    cout<<"Enter your full name :";
    // cin>>full_name;
    cin.getline(full_name,50); // For Read max 50 character  ;;;;;;;;;;;
    cout<<"Your full name is "<<full_name<<endl;

}