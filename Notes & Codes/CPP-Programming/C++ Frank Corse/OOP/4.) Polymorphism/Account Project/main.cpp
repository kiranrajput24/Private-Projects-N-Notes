#include <iostream>
#include "Saving_Account.cpp"
#include "Account.cpp"
#include "Checking_Account.cpp"
#include "Trust_Account.cpp"
#include "VectorUtil.cpp"
#include <vector>
using namespace std;
// Driver code
int main()
{
    Account *a1 = new Saving_Account("Kiran", 100000, 10);
    Account *a2 = new Checking_Account("Krishna", 1000000);
    Account *a3 = new Trust_Account("Mr. Dinesh", 1000000);
    vector<Account *> vec = {a1, a2, a3};
    Display(vec);
    // withdraw(vec, 10000);
    delete a1;
    delete a2;
    delete a3;

    return 0;
}
