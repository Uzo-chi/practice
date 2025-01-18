#include "Account.h"
#include <iostream>
using namespace std;

int main() {
  Account account1(10000);
  Account account2(5000000);

  // display initial account balances
  cout << "*Initial Balance*\n"
       << "account1's balance: " << account1.getBalance()
       << "\naccount2's balance: " << account2.getBalance() << "\n"
       << endl;

  // credit incorrect amount to account1
  account1.credit(-9000);
  // credit correct amount to account2
  account2.credit(500000);

  // display updated balances
  cout << "\n*Updated balances*\n"
       << "account1's balance: " << account1.getBalance()
       << "\naccount2's balance: " << account2.getBalance() << "\n"
       << endl;

  // debit correct amount to account1
  account1.debit(3500);
  // debit excess amount to account2
  account2.debit(10000000);

  // display updated balances
  cout << "\n*Updated balances*\n"
       << "account1's balance: " << account1.getBalance()
       << "\naccount2's balance: " << account2.getBalance() << "\n"
       << endl;
}
