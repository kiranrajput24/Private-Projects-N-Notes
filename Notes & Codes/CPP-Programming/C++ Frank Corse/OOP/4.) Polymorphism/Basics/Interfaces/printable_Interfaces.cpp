#include <iostream>
using namespace std;

class I_Printable
{
    friend ostream &operator<<(ostream &os, const I_Printable &obj);
    virtual void print(ostream &os) const = 0;
};

ostream &operator<<(ostream &os, const I_Printable &obj)
{
    obj.print(os);
}

class account : public I_Printable
{
    void print(ostream &os) const override
    {
        os << "PRINT ACCOUNT CLASS\n";
    }
};
class Saving : public account
{
    void print(ostream &os) const override
    {
        os << "PRINT Saving CLASS\n";
    }
};

void print(const I_Printable &obj)
{
    cout << obj;
}

class dog : public I_Printable
{
    void print(ostream &os) const
    {
        os << "Dog";
    }
};

int main()
{
    I_Printable *d = new dog;
    I_Printable *a = new Saving;
    // cout << *a;
    cout << *d;
    // print(*a);
    return 0;
}