#ifndef Checking_Account_H
#define Checking_Account_H
#include "Account.h"
class Checking_Account : public Account
{

    static constexpr double Per_check_fees = 1.5; //$1.5

public:
    Checking_Account(std::string, double);
    virtual ~Checking_Account()=default;
    virtual bool withdraw(double) override;
    virtual bool deposit(double) override;
    Checking_Account &operator+=(double);
    Checking_Account &operator-=(double);
    virtual void print(std::ostream &os) const override;

};
#endif