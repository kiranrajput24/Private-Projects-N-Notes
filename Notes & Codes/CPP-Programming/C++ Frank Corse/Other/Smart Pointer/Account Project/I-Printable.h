#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_
#include <iostream>
class I_Printable
{
    friend std::ostream &operator<<(std::ostream &, const I_Printable &);

public:
    virtual void print(std::ostream &os) const = 0;
};

//=============Global overloading operator============
// print any type of obj by using polymorphism
std::ostream &operator<<(std::ostream &os, const I_Printable &obj)
{
    obj.print(os);
}

#endif