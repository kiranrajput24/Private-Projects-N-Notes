#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include"I-Printable.h"
class Account:public I_Printable
{
protected:
    double Balance;
    std::string Name;

public:
    Account(std::string,double);
    virtual bool deposit(double)=0;
    virtual bool withdraw(double)=0;
    virtual ~Account()=default;

    
};
#endif