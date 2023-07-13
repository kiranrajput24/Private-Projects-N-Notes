#ifndef vectorclass_H_
#define vectorclass_H_
#include "Account.h"
#include "Saving_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include<vector>

void Display(const std::vector<Account*> &Accounts);
void deposit(const std::vector<Account*> &Accounts,double Amount);
void withdraw(const std::vector<Account*> &Accounts,double Amount);
#endif