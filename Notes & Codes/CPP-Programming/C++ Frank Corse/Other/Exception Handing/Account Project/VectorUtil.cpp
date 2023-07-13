#include "VectorUtil.h"
#include <iostream>
using namespace std;

void Display(const std::vector<Account*> &Accounts)
{
    std::cout << "\n===========Accounts========\n";
    for (auto acc : Accounts)
        cout << *acc << endl;
}
void deposit(std::vector<Account*> &Accounts, double Amount)
{
    std::cout << "\n=====Depositing To==\n";
    for (auto acc : Accounts)
        if (acc->deposit(Amount))
            cout << "Deposited " << Amount << " to " << *acc << endl;
        else
            cout << " Failed Deposit of " << Amount << " to " << *acc << endl;
}
void withdraw(std::vector<Account*> &Accounts, double Amount)
{
    cout << "\n=====Withrawn  from============\n";
    for (auto acc : Accounts)
        if (acc->withdraw(Amount))
            cout << "Withrawn " << Amount << " from " << *acc << endl;
        else
            cout << " Failed Withrawn of " << Amount << " from " << *acc << endl;
}
