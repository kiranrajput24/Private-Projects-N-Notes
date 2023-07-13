#include <iostream>
#include<string>
using namespace std;
class class2; // forward declaration
class class1
{
    string name1;
    int age1;
    friend void defaultfun(class1,class2);
    friend class class2; // freind class
    
  
public:
    void set(void)
    {
        cout << "Enter name1 : ";
        cin >> name1;
        cout << "Enter age1 :" << endl;
        cin >> age1;
    }
    void get(void)
    {
        cout << "Name1 : " << name1 << " age1 : " << age1 << endl;
    }
};
class class2
{

    string name2;
    int pincode2;
    friend void defaultfun(class1,class2);
public:

    class1 objfromclass1();
    objfromclass1.name1="NONO";
    void set(class1 cls1)
    {
        name2=cls1.name1;
        cout << "Enter pincode :" << endl;
        cin >> pincode2;
    }
    void get(void)
    {
        cout << "Name2 : " << name2 << "  compositon  name2 by object"<<" pincode : " << pincode2 << endl;
    }
};


void defaultfun(class1 sample1, class2 sample2)
{
    cout << "Name1 : " << sample1.name1 << " pincode : " << sample2.pincode2 << endl;
}

int main()
{
    class1 obj1;
    class2 obj2;
    obj1.set();
    obj2.set(obj1);
    // defaultfun(obj1,obj2);

    obj2.get();
}