#include <iostream>
class Base 
{public:
 virtual void fun() final
 {

 }
};

class Derived : public Base
{
    virtual void fun()
    {
        cout<<"h";
    }
};

int main()
{
	Derived d;
	return 0;
}
