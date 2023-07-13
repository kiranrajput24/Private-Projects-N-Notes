#include "Trust_Account.h"
#include <iostream>
using namespace std;
Trust_Account::Trust_Account(std::string name = "Unknown", double balance = 0.0, double intr = 5.0) : Saving_Account{name, balance, intr}
{
}
Trust_Account::~Trust_Account()
{
}
bool Trust_Account::deposit(double Amount)
{
    if (Amount > 0)
    {
        if (Amount >= 5000)
        {
            cout << "\n$50 bonus Added for Deposited $" << Amount << "\n";
            Amount += 50;
        }
        Account::deposit(Amount);
        return 1;
    }
    return 0;
}
bool Trust_Account::withdraw(double Amount)
{
    if (Account::Balance * 20 / 100 >= Amount && count < 4)
    {
        Account::withdraw(Amount);
        count++;
        return 1;
    }
    if (Balance * 20 / 100 < Amount)
        cout << "\n\nwithdrawing Amount is more then 20%  Balance:";
    else
        cout << "\n\nAlreadly Withdrawn 3 times [limit is 3 withdrawal is a year]:";
    return 0;
}
void Trust_Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "\nTrust_Account Name : " << Name << "\tBalance : " << Balance << "\t Interest Rate : " << interest_rate << std::endl;
}

Trust_Account &Trust_Account::operator-=(double Amount)
{

    if (Account::Balance * 20 / 100 >= Amount && count < 4)
    {
        Account::withdraw(Amount);
        count++;
        return *this;
    }
    if (Balance * 20 / 100 < Amount)
        cout << "\nwithdrawing Amount is more then 20% of Balance:";
    else
        cout << "\nAlreadly Withdrawn 3 times [limit is 3 withdrawal is a year]:";
    return *this;
}
Trust_Account &Trust_Account::operator+=(double Amount)
{
    if (Amount > 0)
    {
        if (Amount >= 5000)
        {

            cout << "\n$50 bonus Added for Deposited $" << Amount << "\n";
            Amount += 50;
        }
        Account::deposit(Amount);
        return *this;
    }
    return *this;
}