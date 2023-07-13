#include "Account.h"
#include <iostream>
using namespace std;
Account::Account(std::string name = {"Unknown"}, double balance = {0.0}) : Name{name}, Balance{balance}
{
    if (Balance < 0)
        throw illegalBalanceException();
}

bool Account::deposit(double Amount)
{
    if (Amount > 0)
    {
        Balance += Amount;
        return 1;
    }
    else
        return 0;
}
bool Account::withdraw(double Amount)
{
    if (Balance < Amount)
        throw InsuffientFundMethod();

    Balance -= Amount;
    return 1;

    return 0;
}
