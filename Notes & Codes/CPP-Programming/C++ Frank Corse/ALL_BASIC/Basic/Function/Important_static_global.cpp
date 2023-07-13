#include<iostream>
using namespace std;
int num1{10};
void print_static_value()   /* static keyword make variable  alive through out life time 
If any changes in that variabe that will be safe in that when call that function variable contain old value
but that variable use only that Function  */
{
    static int num{10};
    static int i{0};
    // when first call then intial varibale but other calls it use previos variable  value that is it retain.......
    i+=1;
    cout<<"static value "<<i<<".) - "<<num<<endl;
    num+=10;
}

void global_value()
{
    static int i{0};
     i+=1;
    cout<<"Global value "<<i<<".) - "<<num1<<endl;
    num1+=10;
}
int main()
{
    
    for(int i{0};i<10;i++)
    {
        print_static_value();
    }
    cout<<num1;
cout<<"___________Global____________\n\n\n";
for(int i{0};i<10;i++)
    {
        global_value();
    }
}