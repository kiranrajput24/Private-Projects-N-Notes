#ifndef Trust_Account_H
#define Trust_Account_H
#include "Saving_Account.h"
class Trust_Account : public Saving_Account
{

public:
    int count = 1;
    Trust_Account(std::string, double, double);
    virtual ~Trust_Account();
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;
    Trust_Account &operator-=(double);
    Trust_Account &operator+=(double);
    virtual void print(std::ostream &os) const override;

};
#endif