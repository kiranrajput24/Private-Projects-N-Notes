#include <iostream>
#include "Saving_Account.cpp"
#include "Account.cpp"
#include "Checking_Account.cpp"
#include "Trust_Account.cpp"
#include "VectorUtil.cpp"
#include <vector>
#include <memory>
using namespace std;
// Driver code
int main()
{
    try
    {
        unique_ptr<Account> Kiran = make_unique<Saving_Account>("Kiran", -10000);
        cout << *Kiran;
        try
        {

            Kiran->withdraw(100000000);
        }
        catch (const InsuffientFundMethod &ex)
        {
            cout << ex.what() << endl;
        }
    }
    catch (const illegalBalanceException &ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}
