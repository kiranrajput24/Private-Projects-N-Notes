#include "Saving_Account.h"
#include <iostream>
using namespace std;
Saving_Account::Saving_Account(std::string name = "Unknown", double balance = 0.0, double intr = 5.0) : Account{name, balance}, interest_rate{intr}
{
}
Saving_Account::~Saving_Account()
{
}
bool Saving_Account::deposit(double Amount)
{
    if (Amount > 0)
    {
        Amount = Amount + interest_rate * Amount / 100.00;
        Account::deposit(Amount);
        return 1;
    }
    return -1;
}
bool Saving_Account::withdraw(double Amount)
{
    Account::withdraw(Amount);

}
void Saving_Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "\nSaving_Account Name : " << Name << "\tBalance : " << Balance <<" Intetrest rate : "<<interest_rate<< std::endl;
}
Saving_Account &Saving_Account::operator+=(double Amount)
{
    if (Amount > 0)
    {
        Amount = Amount + interest_rate * Amount / 100.00;
        Account::deposit(Amount);
        return *this;
    }
    return *this;
}
Saving_Account &Saving_Account::operator-=(double Amount)
{
    if (Account::Balance >= Amount)
    {
        Account::withdraw(Amount);
        return *this;
    }
    return *this;
}
