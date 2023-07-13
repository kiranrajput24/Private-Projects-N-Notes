#ifndef _SAVING_AC_H_
#define _SAVING_AC_H_
#include "Account.h"
class Saving_Account : public Account
{
protected:
    double interest_rate;

public:
    Saving_Account(std::string, double, double);
    virtual ~Saving_Account();
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;
    Saving_Account &operator+=(double);
    Saving_Account &operator-=(double);
    virtual void print(std::ostream &os) const override;
};
#endif