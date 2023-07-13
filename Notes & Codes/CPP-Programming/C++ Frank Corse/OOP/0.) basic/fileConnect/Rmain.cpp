#include <iostream>
#include"Account.cpp"
#include <string>
using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0))
        cout << "deposit ok" << endl;
    else
        cout << "Deposit Not Allowed" << endl;


        if(frank_account.withdraw(11500))
        cout<<"Withdrawal ok"<<endl;

        else cout<<"Not Sufficient Funds"<<endl;

    return 0;
}