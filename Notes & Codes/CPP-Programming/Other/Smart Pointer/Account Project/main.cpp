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
    // unique_ptr<Account> p1{new Saving_Account{"Kiran", 10000}}, p2{new Saving_Account{"Krishna", 10000}};
    // cout << *p1 << *p2;
    // unique_ptr<Account> s = make_unique<Saving_Account>("Kiran", 10000);
    // s->deposit(100000000);
    // s->withdraw(100);
    // vector<unique_ptr<Account>> vec;
    // vec.push_back(make_unique<Saving_Account>("Kiran", 10000)); // initialize new smart pointer
    // vec.push_back(make_unique<Checking_Account>("Krishna", 10000));

    // for(const auto &v:vec)
    // cout<<*v;

    {
        shared_ptr<Account> p1 = make_shared<Saving_Account>("kiran", 1000);
        shared_ptr<Account> p2 = make_shared<Checking_Account>("Krishna", 10000);
        shared_ptr<Account> p3 = make_shared<Trust_Account>("Mr.Dinesh", 10000, 10);
        cout << p1.use_count() << endl;
         {
            vector<shared_ptr<Account>> vec;
            vec.push_back(p1);
            vec.push_back(p2);
            vec.push_back(p3);
            cout << p1.use_count() << endl;

            for (const auto &acc : vec)
                cout << *acc << endl;
        }

        cout << p1.use_count() << endl;
    }

    return 0;
}
