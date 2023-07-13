#include "Checking_Account.h"
#include <iostream>
using namespace std;
Checking_Account::Checking_Account(std::string name = "Unknown", double balance = 0.0) : Account{name, balance}
{
}
bool Checking_Account::withdraw(double Amount)
{
    if (Balance >= Amount)
    {
        Amount = Amount + Per_check_fees;

        // return Account::withdraw(Amount);

        if (Account::withdraw(Amount))
        {
            cout << "Withdrawal fee $1.50 deducted :";
            return 1;
        }
    }
    cout << "\nDoes not Suffient Balance :";
    return 0;
}
bool Checking_Account::deposit(double Amount)
{
    return Account::deposit(Amount);
}
void Checking_Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "\nChecking_Account Name : " << Name << "\tBalance : " << Balance << std::endl;
}
Checking_Account &Checking_Account::operator+=(double Amount)
{

    Account::deposit(Amount);
    return *this;
}
Checking_Account &Checking_Account::operator-=(double Amount)
{
    Checking_Account::withdraw(Amount);
    *this;
}
