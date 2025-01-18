#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(int amount) {
  if (amount >= 0)
    balance = amount;
  else {
    balance = 0;
    cout << "Initial Balance is invalid!" << endl;
  }
}

void Account::credit(int amount) {
  if (amount >= 0)
    balance += amount;
  else {
    cout << "Invalid amount to be credited!" << endl;
  }
}

void Account::debit(int amount) {
  if (amount >= 0) {
    if (balance > amount)
      balance -= amount;
    else
     cout << "Debit amount exceeded account balance.";
  }
  else {
    cout << "Invalid amount to be debited!" << endl;
  }
}

int Account::getBalance() {
  return balance;
}
